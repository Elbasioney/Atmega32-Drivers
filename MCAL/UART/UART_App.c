/* 
 * File:   UART_App.c
 * Author: Ahmed Elbasioney
 *
 * Created on August 15, 2023, 9:11 AM
 */

#include "UART_Config.h"
#include "UART_Interface.h"
#include "UART_Private.h"
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"
#include "../DIO/DIO_Interface.h"


void __vector_13(void) __attribute__((signal)) ;   // UART Receiver vector
void (*UART_REC_INTERRUPT_HANDLER)(void) = NULL ;  // UART Receiver Interrupt handler 


void UART_Init(void){
    UCSRB_REG->RXEN = 1  ;
    UCSRB_REG->TXEN = 1  ;
    UCSRB_REG->RXCIE = 1 ;
    UBRRL_REG = (u8)(BAUD_RATE_SET_SPEED) ;
    UBRRH_REG->UBRR = (u8)((BAUD_RATE_SET_SPEED >> 8 ));
    UCSRC_REG->URSEL = 1 ;
    UCSRC_REG->UCSZ = (DATA_SIZE_SET_SIZE & 0x03) ;
    UCSRB_REG->UCSZ = ((DATA_SIZE_SET_SIZE >> 2 ) & 0x01 ) ; 
}

void UART_SendChar(u8 _char){
        while((UCSRA_REG->UDRE) == 0 );
        UDR_REG = _char ;
        
}

void UART_SendString(u8 *_char){
    while(*_char){
        UART_SendChar(*_char);
        _char++ ;
    }
    
    
}

void UART_Receiver(void (*Copy_UART_REC_INTERRUPT_HANDLER)(void)){
    
    UART_REC_INTERRUPT_HANDLER =  Copy_UART_REC_INTERRUPT_HANDLER ; 
    
}

void UART_ReadRegisterValue(u8 *_char){
    *_char = UDR_REG  ;
}



void __vector_13(void) {
   
    
    if(UCSRA_REG->RXC){
        if(UART_REC_INTERRUPT_HANDLER){
        UART_REC_INTERRUPT_HANDLER();
        
        }else{
        
        }
        UDR_REG = 0 ;
    }else{
        
    }
     
}