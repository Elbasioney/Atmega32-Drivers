/* 
 * File:   SPI_Private.h
 * Author: Ahmed Elbasioney
 *
 * Created on August 18, 2023, 6:43 PM
 */

#ifndef SPI_PRIVATE_H
#define	SPI_PRIVATE_H


#include "../../LIB/STD_TYPES.h"

#define SPI_ENABLE  1 
#define SPI_DISABLE 0 
#define SPI_INTERRUPT_ENABLE  1 
#define SPI_INTERRUPT_DISABLE 0 




/******************************************************************************/

typedef struct {
    u8 SPR  : 2  ;  // SPI Clock Rate Select  
    u8 CPHA : 1  ;  // Clock Phase  
    u8 CPOL : 1  ;  // Clock Polarity 
    u8 MSTR : 1  ;  // Master/Slave Select 
    u8 DORD : 1  ;  // Data Order 
    u8 SPE  : 1  ;  // SPI Enable
    u8 SPIE : 1  ;  // SPI Interrupt Enable
}SPCR_REG_t;

#define SPCR_REG ((volatile SPCR_REG_t*)0x2D)

/******************************************************************************/

/******************************************************************************/

typedef struct {
    u8 SPI2X      : 1  ;  // Double SPI Speed Bit  
    u8 RESERVED   : 5  ;  
    u8 WCOL       : 1  ;  // Write COLlision Flag
    u8 SPIF       : 1  ;  // SPI Interrupt Flag
}SPSR_REG_t;

#define SPSR_REG ((volatile SPSR_REG_t*)0x2E)

/******************************************************************************/

/******************************************************************************/

#define SPDR_REG (*(volatile u8*)0x2F)

/******************************************************************************/

#endif	/* SPI_PRIVATE_H */

