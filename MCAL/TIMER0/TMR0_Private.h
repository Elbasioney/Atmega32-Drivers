/* 
 * File:   TMR0_Private.h
 * Author: Ahmed Elbasioney
 *
 * Created on August 5, 2023, 9:40 AM
 */

#ifndef TMR0_PRIVATE_H
#define	TMR0_PRIVATE_H

#include "../../LIB/STD_TYPES.h"

/******************************************************/
typedef struct {
    u8 TOV0     : 1 ;
    u8 OCF0     : 1 ;
    u8 TOV1     : 1 ;
    u8 OCF1B    : 1 ;
    u8 OCF1A    : 1 ;
    u8 ICF1    : 1 ;
    u8 RESERVED : 2 ; 
}TIFR_REG_t;

#define TIFR_REG ((volatile TIFR_REG_t *)0x58)
/******************************************************/
/******************************************************/
typedef struct {
    u8 TOIE0    : 1 ;
    u8 OCIE0    : 1 ;
    u8 TOIE1    : 1 ;
    u8 OCIE1B   : 1 ;
    u8 OCIE1A   : 1 ;
    u8 TICIE1   : 1 ;
    u8 RESERVED : 2 ;
}TIMSK_REG_t;

#define TIMSK_REG ((volatile TIMSK_REG_t *)0x59)
/******************************************************/
/******************************************************/
typedef struct {
    u8 CS : 3 ;     // clock selection bits
    u8 WGM01 : 1 ;  // wave form generation second bit
    u8 COM : 2 ;    // Compare Match Output Mode
    u8 WGM00 : 1 ;  // wave form generation first bit
    u8 FOC0 : 1 ;   // Force Output Compare
}TCCR0_REG_t;

#define TCCR0_REG ((volatile TCCR0_REG_t *)0x53)
/******************************************************/

#define TCNT0_REG ( * (volatile u8 * )0x52)    // timer0 overflow register
#define OCR0_REG  ( * (volatile u8 * )0x5C)    // timer0 compare match register

/******************************************************/

/******************************************************/

#endif	/* TMR0_PRIVATE_H */

