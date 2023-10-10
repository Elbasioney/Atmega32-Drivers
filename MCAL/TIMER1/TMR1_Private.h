/* 
 * File:   TMR1_Private.h
 * Author: Ahmed Elbasioney 
 *
 * Created on August 10, 2023, 12:57 PM
 */

#ifndef TMR1_PRIVATE_H
#define	TMR1_PRIVATE_H

#include "../../LIB/STD_TYPES.h"

/******************************************************************************/
typedef struct {
    u8 WGM   : 2 ;   // Wave form Generation section 1 
    u8 FOC1B : 1 ;   // force output compare match for channel B
    u8 FOC1A : 1 ;   // force output compare match for channel A
    u8 COM1B : 2 ;   // Compare Output Mode for channel B
    u8 COM1A : 2 ;   // Compare Output Mode for channel A
}TCCR1A_REG_t;

#define TCCR1A_REG ((volatile TCCR1A_REG_t *)0x4F)
/******************************************************************************/

/******************************************************************************/
typedef struct {
    u8 CS       : 3 ;    // Timer 1 clock source 
    u8 WGM      : 2 ;    // Wave form Generation section 2
    u8 RESERVER : 1 ; 
    u8 ICES1 : 1 ;       // Input Capture Edge Select
    u8 ICNC1 : 1 ;       // Input Capture Noise Canceler
}TCCR1B_REG_t;

#define TCCR1B_REG ((volatile TCCR1B_REG_t *)0x4E)
/******************************************************************************/

/******************************************************************************/
#define TCNT1H_REG (*(volatile u8 *)0x4D)   // high register for timer1 overflow
#define TCNT1L_REG (*(volatile u8 *)0x4C)   // low register for timer1 overflow
/******************************************************************************/

/******************************************************************************/
#define OCR1AH_REG (*(volatile u8 *)0x4B)   // high register for timer1 compare match on channel A
#define OCR1AL_REG (*(volatile u8 *)0x4A)   // low register for timer1 compare match on channel A
/******************************************************************************/

/******************************************************************************/
#define OCR1BH_REG (*(volatile u8 *)0x49)   // high register for timer1 compare match on channel B
#define OCR1BL_REG (*(volatile u8 *)0x48)   // low register for timer1 compare match on channel B
/******************************************************************************/

/******************************************************************************/
#define ICR1H_REG (*(volatile u8 *)0x47)   // high register for timer1 input capture
#define ICR1L_REG (*(volatile u8 *)0x46)   // low register for timer1 input capture
/******************************************************************************/




#endif	/* TMR1_PRIVATE_H */

