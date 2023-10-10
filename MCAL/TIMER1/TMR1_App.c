/*
 * File:   TMR1_App.c
 * Author: Ahmed Elbasioney
 *
 * Created on Aug 10, 2023, 5:53 PM
 */

#include "TMR1_Config.h"
#include "TMR1_Interface.h"
#include "TMR1_Private.h"
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"
#include "../TIMER0/TMR0_Private.h"
#include "../DIO/DIO_Interface.h"

/******************************************************************************/
void __vector_9(void) __attribute__((signal));  // Timer/Counter1 Overflow 
void __vector_7(void) __attribute__((signal));  // Timer/Counter1 on compare match A
void __vector_8(void) __attribute__((signal));  // Timer/Counter1 on compare match B 
void __vector_6(void) __attribute__((signal));  // Timer/Counter1 Input Capture Mode
static void (*TMR1_Interrupt_Handler)(void) = NULL ;   // Timer/Counter1 interrupt handler
static volatile u16 timer1_preloded_value = 0 ; // Timer/Counter1 pre-loaded value
#if ((TMR1_SET_MODE == TMR1_PWM_MODE_8BIT) || (TMR1_SET_MODE == TMR1_PWM_MODE_9BIT)  || (TMR1_SET_MODE == TMR1_PWM_MODE_10BIT ))
static u16 *TMR1_Pwm_Compare_value_A = 0 ; 
static u16 *TMR1_Pwm_Compare_value_B = 0 ;
#endif
static void (*ICU1_Interrupt_Handler)(void) = NULL ;   // Timer/Counter1 ICU interrupt handler
static void TMR1_ICU_InterruptEnable(void);
static void TMR1_ICU_InterruptDisable(void);
/******************************************************************************/

void TMR1_Init(void (*Copy_TMR1_Interrupt_Handler)(void)){
    // TCCR1A register configuration
    TCCR1A_REG->WGM =  (TMR1_SET_MODE & 0x03) ; 
    TCCR1A_REG->FOC1A = TMR1_SET_COMPARE_MATCH_STATUS_A ;
    TCCR1A_REG->FOC1B = TMR1_SET_COMPARE_MATCH_STATUS_B ;
    TCCR1A_REG->COM1A = TMR1_SET_COMPARE_MATCH_REACTION_A ;
    TCCR1A_REG->COM1B = TMR1_SET_COMPARE_MATCH_REACTION_B ;
    // TCCR1B register configuration
    TCCR1B_REG->WGM =  ((TMR1_SET_MODE >> 2) & 0x03) ;
    TCCR1B_REG->CS = TMR1_SET_CLOCK_SELECT  ;
    TCCR1B_REG->ICES1 = TMR1_SET_INPUT_CAPTURE_EDGE ; 
    TCCR1B_REG->ICNC1 = 0 ; 
    // set timer 1 pre-loaded value 
#if ((TMR1_SET_CLOCK_SELECT == TMR1_COUNTER_MODE_ON_RISING_EDGE) || (TMR1_SET_CLOCK_SELECT == TMR1_COUNTER_MODE_ON_FALLING_EDGE))
    
#else
    timer1_preloded_value = TIMER1_PRELOADED_VALUE ; 
    TCNT1H_REG = ((timer1_preloded_value >> 8)& 0xFF) ;
    TCNT1L_REG = (timer1_preloded_value & 0xFF) ;
#endif    
    
    // passing callback function to timer 1 overflow ISR
    TMR1_Interrupt_Handler = Copy_TMR1_Interrupt_Handler ; 
    // enable timer 1 overflow interrupt 
    TIMSK_REG->TOIE1 = TMR1_OVERFLOW_INTERRUPT_ENABLE ; 
}

void TMR1_DeInit(void){
    TCCR1B_REG->CS = TMR1_NO_CLOCK_SOURCE  ;
    TCNT1H_REG = 0 ;
    TCNT1L_REG = 0 ;
    TIMSK_REG->TOIE1 = TMR1_OVERFLOW_INTERRUPT_DISABLE ;
}

#if ((TMR1_SET_CLOCK_SELECT == TMR1_COUNTER_MODE_ON_RISING_EDGE) || (TMR1_SET_CLOCK_SELECT == TMR1_COUNTER_MODE_ON_FALLING_EDGE))
void TMR1_ReadCounterValue(u16 *timer1_counter_val){
    *timer1_counter_val = (u16)(( TCNT1H_REG << 8 ) | TCNT1L_REG) ; 
}

#endif

void TMR1_Pwm_A(u8 pulse_width){
#if TMR1_SET_MODE == TMR1_PWM_MODE_8BIT
    u16 temp_ocr1a_value = (u16)((u32)(pulse_width * 255) / 100) ;
    TIMSK_REG->OCIE1A = TMR1_ON_CAMPARE_MATCH_A_INTERRUPT_DISABLE ; 
    TCCR1A_REG->WGM = (TMR1_SET_MODE & 0x03) ; 
    TCCR1B_REG->WGM =  ((TMR1_SET_MODE >> 2) & 0x03) ;
    DIO_PinInit(PORT_D , PIN_5 , OUTPUT);
    TCCR1A_REG->COM1A = 2 ;
    *TMR1_Pwm_Compare_value_A = temp_ocr1a_value ;
    TCCR1B_REG->CS = TMR1_SET_CLOCK_SELECT ; 
    TIMSK_REG->OCIE1A = TMR1_ON_CAMPARE_MATCH_A_INTERRUPT_ENABLE ; 
#elif  TMR1_SET_MODE == TMR1_PWM_MODE_9BIT
    u16 temp_ocr1a_value = (u16)((u32)(pulse_width * 511) / 100) ;
    TIMSK_REG->OCIE1A = TMR1_ON_CAMPARE_MATCH_A_INTERRUPT_DISABLE ; 
    TCCR1A_REG->WGM = (TMR1_SET_MODE & 0x03) ; 
    TCCR1B_REG->WGM =  ((TMR1_SET_MODE >> 2) & 0x03) ;
    DIO_PinInit(PORT_D , PIN_5 , OUTPUT);
    TCCR1A_REG->COM1A = 2 ;
    *TMR1_Pwm_Compare_value_A = temp_ocr1a_value ;
    TCCR1B_REG->CS = TMR1_SET_CLOCK_SELECT ; 
    TIMSK_REG->OCIE1A = TMR1_ON_CAMPARE_MATCH_A_INTERRUPT_ENABLE ; 
#elif  TMR1_SET_MODE == TMR1_PWM_MODE_10BIT
    
#elif  TMR1_SET_MODE == TMR1_PWM_MODE_9BIT
    
#elif  TMR1_SET_MODE == TMR1_CTC_MODE    
    
#endif     
}

void TMR1_Pwm_B(u8 pulse_width){
#if TMR1_SET_MODE == TMR1_PWM_MODE_8BIT
    u16 temp_ocr1b_value = (u16)((u32)(pulse_width * 255) / 100) ;
    TIMSK_REG->OCIE1B = TMR1_ON_CAMPARE_MATCH_A_INTERRUPT_DISABLE ; 
    TCCR1A_REG->WGM = (TMR1_SET_MODE & 0x03) ; 
    TCCR1B_REG->WGM =  ((TMR1_SET_MODE >> 2) & 0x03) ;
    DIO_PinInit(PORT_D , PIN_4 , OUTPUT);
    TCCR1A_REG->COM1B = 2 ;
    *TMR1_Pwm_Compare_value_B = temp_ocr1b_value ;
    TCCR1B_REG->CS = TMR1_SET_CLOCK_SELECT ; 
    TIMSK_REG->OCIE1B = TMR1_ON_CAMPARE_MATCH_B_INTERRUPT_ENABLE ; 
#elif  TMR1_SET_MODE == TMR1_PWM_MODE_9BIT
    u16 temp_ocr1b_value = (u16)((u32)(pulse_width * 511) / 100) ;
    TIMSK_REG->OCIE1B = TMR1_ON_CAMPARE_MATCH_A_INTERRUPT_DISABLE ; 
    TCCR1A_REG->WGM = (TMR1_SET_MODE & 0x03) ; 
    TCCR1B_REG->WGM =  ((TMR1_SET_MODE >> 2) & 0x03) ;
    DIO_PinInit(PORT_D , PIN_4 , OUTPUT);
    TCCR1A_REG->COM1B = 2 ;
    *TMR1_Pwm_Compare_value_B = temp_ocr1b_value ;
    TCCR1B_REG->CS = TMR1_SET_CLOCK_SELECT ; 
    TIMSK_REG->OCIE1B = TMR1_ON_CAMPARE_MATCH_B_INTERRUPT_ENABLE ; 
#elif  TMR1_SET_MODE == TMR1_PWM_MODE_10BIT
    
#elif  TMR1_SET_MODE == TMR1_PWM_MODE_9BIT
    
#elif  TMR1_SET_MODE == TMR1_CTC_MODE    
    
#endif     
}

/******************** Input Capture Unit Functions ****************************/

void TMR1_ICU_Init(void (*Copy_ICU1_Interrupt_Handler)(void)){
    TCCR1B_REG->ICNC1 = 1 ;
    TCCR1B_REG->ICES1 = 1 ;   // Set ICU to Rising edge
    DIO_PinInit(PORT_D , PIN_6 , INPUT);
    TMR1_ICU_InterruptEnable();
    ICU1_Interrupt_Handler = Copy_ICU1_Interrupt_Handler ; 
}

void TMR1_ICU_DeInit(void){
   
    TMR1_ICU_InterruptDisable();
     
}


void TMR1_ICU_Edge(u8 edge_mode){
    
    TCCR1B_REG->ICES1 = edge_mode ;   // Set ICU to Rising edge
    
}

u16 TMR1_ICU_ReadInputCapture(void){
    
    return (u16)((ICR1H_REG << 8) | ICR1L_REG ) ;
    
}

static void TMR1_ICU_InterruptEnable(void){
    
    TIMSK_REG->TICIE1 = 1  ;
    
}
static void TMR1_ICU_InterruptDisable(void){
    
    TIMSK_REG->TICIE1 = 0  ;
    
}

/******************************************************************************/
void __vector_9(void){
    
    // calling ISR
    TMR1_Interrupt_Handler();
    // set timer 1 pre-loaded value 
    TCNT1H_REG = ((timer1_preloded_value >> 8)& 0xFF) ;
    TCNT1L_REG = (timer1_preloded_value & 0xFF) ;
    
}
void __vector_7(void){
    
#if TMR1_SET_MODE == TMR1_PWM_MODE_8BIT
    OCR1AH_REG = (u8)((*TMR1_Pwm_Compare_value_A >> 8 ) & 0x0000 ) ;
    OCR1AL_REG = (u8)(*TMR1_Pwm_Compare_value_A & 0x00FF)  ; 
#elif  TMR1_SET_MODE == TMR1_PWM_MODE_9BIT
    OCR1AH_REG = (u8)((*TMR1_Pwm_Compare_value_A >> 8 ) & 0x00FF ) ;
    OCR1AL_REG = (u8)(*TMR1_Pwm_Compare_value_A & 0x00FF)  ; 
#elif  TMR1_SET_MODE == TMR1_PWM_MODE_10BIT
    
#elif  TMR1_SET_MODE == TMR1_PWM_MODE_9BIT
    
#elif  TMR1_SET_MODE == TMR1_CTC_MODE    
    
#endif    
}
void __vector_8(void){
           
#if TMR1_SET_MODE == TMR1_PWM_MODE_8BIT
    OCR1BH_REG = (u8)((*TMR1_Pwm_Compare_value_B >> 8 ) & 0x00FF ) ;
    OCR1BL_REG = (u8)((*TMR1_Pwm_Compare_value_B) & 0x00FF)  ;
#elif  TMR1_SET_MODE == TMR1_PWM_MODE_9BIT
    OCR1BH_REG = (u8)((*TMR1_Pwm_Compare_value_B >> 8 ) & 0x00FF ) ;
    OCR1BL_REG = (u8)((*TMR1_Pwm_Compare_value_B) & 0x00FF)  ;
#elif  TMR1_SET_MODE == TMR1_PWM_MODE_10BIT
    
#elif  TMR1_SET_MODE == TMR1_PWM_MODE_9BIT
    
#elif  TMR1_SET_MODE == TMR1_CTC_MODE    
    
#endif    
    
}

void __vector_6(void){
    if(ICU1_Interrupt_Handler){
        ICU1_Interrupt_Handler();
    }else{
        
    }
}