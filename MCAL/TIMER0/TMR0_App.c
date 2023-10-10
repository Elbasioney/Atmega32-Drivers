/* 
 * File:   TMR0_App.c
 * Author: Ahmed Elbasioney
 *
 * Created on August 5, 2023, 9:40 AM
 */

/*************************** Inclusion Section ********************************/
#include "TMR0_Config.h"
#include "TMR0_Interface.h"
#include "TMR0_Private.h"
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"
#include "../DIO/DIO_Interface.h"
/******************************************************************************/


static void (*TMR0_INT_HANDLER)(void) = NULL ; 
static u8* TMR0_Pwm_Compare_value = NULL  ;

void __vector_11(void) __attribute__((signal));
void __vector_10(void) __attribute__((signal));

/******************************************************************************/
void TMR0_Init(void (*Copy_TMR0_INT_HANDLER)(void)){
    TCCR0_REG->FOC0 = TMR0_SET_COMPARE_MATCH_STATUS ;
    TCCR0_REG->CS = TMR0_SET_CLOCK_SELECT ;
    TCCR0_REG->WGM00 = (u8)(TMR0_SET_MODE & 0x01) ;
    TCCR0_REG->WGM01 = (u8)((TMR0_SET_MODE >> 1) & 0x01) ;   
    TCCR0_REG->COM =  0 ; // temp disable
    TMR0_INT_HANDLER = Copy_TMR0_INT_HANDLER ;   // set call back function 
#if ((TMR0_SET_CLOCK_SELECT == TMR0_COUNTER_MODE_ON_FALLING_EDGE) || (TMR0_SET_CLOCK_SELECT == TMR0_COUNTER_MODE_ON_RISING_EDGE))
    
#else 
    TCNT0_REG = TCNT0_REG_VALUE ;
#endif    
    TIMSK_REG->TOIE0 = 1 ;   // enable timer0 over flow interrupt

    
}
void TMR0_DeInit(void){
    TCCR0_REG->CS = TMR0_NO_CLOCK_SOURCE ;
    
}

void TMR0_Pwm(u8 pulse_width){
    u8 temp_ocr0_value = (u8)((u16)(pulse_width * 255) / 100) ;
    TIMSK_REG->OCIE0 = 0  ;   // disable in compare match interrupt
    TCCR0_REG->WGM00 =  1 ;    // set TMR0 to PWM mode
    TCCR0_REG->WGM01 =  0 ; 
    DIO_PinInit(PORT_B, PIN_3 , OUTPUT);    // set OC0 to be output
    TCCR0_REG->COM = 2 ;     // set OC0 to clear in compare match
    *TMR0_Pwm_Compare_value = temp_ocr0_value ;
    TCCR0_REG->CS = TMR0_SET_CLOCK_SELECT ;
    TIMSK_REG->OCIE0 = 1  ;   // enable in compare match interrupt
}

#if ((TMR0_SET_CLOCK_SELECT == TMR0_COUNTER_MODE_ON_FALLING_EDGE) || (TMR0_SET_CLOCK_SELECT == TMR0_COUNTER_MODE_ON_RISING_EDGE))

void TMR0_ReadCounterValue(u8 *counter_ret_val ){
    *counter_ret_val = TCNT0_REG ; 
    
}

#endif



void __vector_11(void){
    
    TMR0_INT_HANDLER();
    TCNT0_REG = TCNT0_REG_VALUE ;
    
}

void __vector_10(void){
    OCR0_REG = *TMR0_Pwm_Compare_value ; 
}

