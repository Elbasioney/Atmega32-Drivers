/* 
 * File:   TWI_Private.h
 * Author: Ahmed Elbasioney
 *
 * Created on August 19, 2023, 10:18 AM
 */

#ifndef TWI_PRIVATE_H
#define	TWI_PRIVATE_H

#include "../../LIB/STD_TYPES.h"


#define TWI_ENABLED   1 
#define TWI_DISABLED  0 
#define TWI_INTERRUPT_ENABLED    1 
#define TWI_INTERRUPT_DISABLED   0 

#define TWI_BUSY  0 
#define TWI_IDLE  1

/******************************************************************************/
typedef struct {
    u8 TWIE     : 1  ;  // TWI Interrupt Enable
    u8 RESERVED : 1  ;  
    u8 TWEN     : 1  ;  // TWI Enable Bit
    u8 TWWC     : 1  ;  // TWI Write Collision Flag
    u8 TWSTO    : 1  ;  // TWI STOP Condition Bit
    u8 TWSTA    : 1  ;  // TWI START Condition Bit
    u8 TWEA     : 1  ;  // TWI Enable Acknowledge Bit
    u8 TWINT    : 1  ;  // TWI Interrupt Flag
}TWCR_REG_t;

#define TWCR_REG ((volatile TWCR_REG_t*)0x56)
/******************************************************************************/

/******************************************************************************/
typedef struct {
    u8 TWPS     : 2  ;  // TWI Prescaler Bits
    u8 RESERVED : 1  ;
    u8 TWS      : 5  ;  // TWI Status
}TWSR_REG_t;

#define TWSR_REG ((volatile TWSR_REG_t*)0x21)
/******************************************************************************/

/******************************************************************************/
typedef struct {
    u8 TWGCE     : 1  ;  // TWI General Call Recognition Enable Bit
    u8 TWA       : 7  ;  // TWI (Slave) Address Register
}TWAR_REG_t;

#define TWAR_REG ((volatile TWAR_REG_t*)0x22)
/******************************************************************************/

/******************************************************************************/

#define TWBR_REG (*(volatile u8*)0x20)  // TWI Bit Rate Register
#define TWDR_REG (*(volatile u8*)0x23)  // TWI Data Register

/******************************************************************************/


#endif	/* TWI_PRIVATE_H */

