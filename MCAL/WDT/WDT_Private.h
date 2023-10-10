/* 
 * File:   WDT_Private.h
 * Author: Ahmed Elbasioney
 *
 * Created on August 13, 2023, 9:46 AM
 */

#ifndef WDT_PRIVATE_H
#define	WDT_PRIVATE_H

#include "../../LIB/STD_TYPES.h"

typedef struct {
    u8 WDP      : 3 ; 
    u8 WDE      : 1 ;
    u8 WDTOE    : 1 ;
    u8 RESERVED : 3 ;
}WDTCR_REG_t;

#define WDTCR_REG ((volatile WDTCR_REG_t * )0x41)

#endif	/* WDT_PRIVATE_H */

