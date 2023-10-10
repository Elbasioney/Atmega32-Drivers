/* 
 * File:   INT0_Private.h
 * Author: LENOVO
 *
 * Created on July 31, 2023, 11:06 PM
 */

#ifndef INT0_PRIVATE_H
#define	INT0_PRIVATE_H

#define GICR_REG     (*(volatile u8*)0x5B)
#define GICR_INT0    6
#define GICR_INT1    7
#define GICR_INT2    5


#define GIFR_REG     (*(volatile u8*)0x5A)
#define GIFR_INTF0    6
#define GIFR_INTF1    7
#define GIFR_INTF2    5


#define MCUCR_REG    (*(volatile u8*)0x55)
#define MCUCR_INT00    0
#define MCUCR_INT01    1
#define MCUCR_INT10    2
#define MCUCR_INT11    3


#define MCUCSR_REG   (*(volatile u8*)0x54)
#define MCUCSR_INT2   6


#endif	/* INT0_PRIVATE_H */

