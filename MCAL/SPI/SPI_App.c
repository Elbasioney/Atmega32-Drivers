/*
 * File:   SPI_App.c
 * Author: Ahmed Elbasioney
 *
 * Created on Aug 8, 2023, 7:43 PM
 */

#include "SPI_Config.h"
#include "SPI_Interface.h"
#include "SPI_Private.h"
#include "../DIO/DIO_Interface.h"
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"

/******************************************************************************/

void __vector_12(void) __attribute__((signal));   // SPI vector
void (*SPI_INTERRUPT_HANDLER)(void) = NULL ;      // SPI interrupt handler 

/******************************************************************************/


void SPI_Init(void (*Copy_SPI_INTERRUPT_HANDLER)(void)){
    SPCR_REG->SPR = SPI_SET_CLOCK_RATE ; 
    SPCR_REG->MSTR = SPI_SET_MODE ; 
    SPCR_REG->SPE = SPI_ENABLE ; 
    SPCR_REG->SPIE = SPI_INTERRUPT_ENABLE ; 
    DIO_PinInit(PORT_B , PIN_5 , OUTPUT );   // MOSI pin output
    DIO_PinInit(PORT_B , PIN_6 , INPUT );    // MISO pin input
    DIO_PinInit(PORT_B , PIN_4 , OUTPUT );   // SS pin output
    DIO_PinInit(PORT_B , PIN_7 , OUTPUT );   // SCK pin output
    DIO_PinWrite(PORT_B , PIN_4 , HIGH);     // SS pin high
    SPSR_REG->SPI2X = 0 ; 
}























void __vector_12(void){
    
    
    
    
    
    
}