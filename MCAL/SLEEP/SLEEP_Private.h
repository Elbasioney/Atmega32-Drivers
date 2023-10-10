#ifndef _SLEEP_PRIVATE_H_
#define _SLEEP_PRIVATE_H_

#include "../../LIB/STD_TYPES.h"

typedef struct{
    u8 ISC : 4 ;  // not intersted in these 4 bits in sleep mode configurations 
    u8 SM  : 3 ;  // Sleep mode 
    u8 SE  : 1 ;  // Sleep enable 
}MCUCR_t;

#define MCUCR ((volatile MCUCR_t*)0x55)

















#endif 

