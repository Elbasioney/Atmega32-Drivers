/* 
 * File:   UART_Private.h
 * Author: Ahmed Elbasioney
 *
 * Created on August 15, 2023, 9:11 AM
 */

#ifndef UART_PRIVATE_H
#define	UART_PRIVATE_H

#include "../../LIB/STD_TYPES.h"


/*******************************************************************************/
typedef struct{
    u8 UCPOL : 1 ;  // Clock on falling - rising
    u8 UCSZ : 2 ;  // Data size
    u8 USBS  : 1 ;  // Stop bit configuration 
    u8 UPM   : 2 ;  // parity configuration
    u8 UMSEL : 1 ;  // Asynchronous - synchronous 
    u8 URSEL : 1 ;  // Register select
}UCSRC_REG_t;

#define UCSRC_REG ((volatile UCSRC_REG_t*)0x40)

/*******************************************************************************/

typedef struct{
    u8 UBRR     : 4 ;  // continue baud rate configuration
    u8 RESERVER : 3 ; 
    u8 URSEL    : 1 ;  // Register select
}UBRRH_REG_t;

#define UBRRH_REG ((volatile UBRRH_REG_t*)0x40)

/*******************************************************************************/

typedef struct{
    u8 MPCM   : 1 ;    // Multi-processing mode ( Set to Zero )
    u8 U2X    : 1 ;    // Double Transmitting ( Only effective with asynchronous )
    u8 PE     : 1 ;    // Parity Error
    u8 DOR    : 1 ;    // Data overrun 
    u8 FE     : 1 ;    // Framing Error
    u8 UDRE   : 1 ;    // UART register empty
    u8 TXC    : 1 ;    // UART transmit complete
    u8 RXC    : 1 ;    // UART receive complete  
}UCSRA_REG_t ; 

#define UCSRA_REG ((volatile UCSRA_REG_t*)0x2B)

/*******************************************************************************/

typedef struct{
    u8 TXB8  : 1  ;    // ninth transmitted bit
    u8 RXB8  : 1  ;    // ninth received bit
    u8 UCSZ  : 1  ;    // continue data size configuration 
    u8 TXEN  : 1  ;    // Transmitting Enable 
    u8 RXEN  : 1  ;    // receiving Enable 
    u8 UDRIE : 1  ;    // empty date register interrupt Enable 
    u8 TXCIE : 1  ;    // Transmitter interrupt Enable 
    u8 RXCIE : 1  ;    // receiver interrupt Enable 
}UCSRB_REG_t;

#define UCSRB_REG ((volatile UCSRB_REG_t*)0x2A)

/*******************************************************************************/

#define UBRRL_REG (*(volatile u8* )0x29)   // baud rate configuration low register 
#define UDR_REG   (*(volatile u8* )0x2C)   // UART I/O register 

/*******************************************************************************/


#endif	/* UART_PRIVATE_H */

