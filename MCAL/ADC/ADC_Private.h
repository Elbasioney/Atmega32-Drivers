 /* 
 * File:   ADC_Private.h
 * Author: LENOVO
 *
 * Created on August 1, 2023, 12:53 PM
 */

#ifndef ADC_PRIVATE_H
#define	ADC_PRIVATE_H

#include "../../LIB/STD_TYPES.h"

/***********************************************************************************/
typedef struct{
    u8 ADPS : 3 ;
    u8 ADIE : 1 ;
    u8 ADIF : 1 ;
    u8 ADATE : 1 ;
    u8 ADSC : 1 ;
    u8 ADEN : 1 ;
}ADCSRA_t;

//volatile ADCSRA_t *ADCSRA_REG = 0x26 ;
#define ADCSRA_REG ((volatile ADCSRA_t *)0x26)
/***********************************************************************************/
/***********************************************************************************/
typedef struct{
    u8 MUX : 5 ;   // Set ADC channel from 0 --> 7
    u8 ADLAR : 1 ;
    u8 REFS : 2 ;
}ADMUX_t;

//volatile ADMUX_t *ADMUX_REG = 0x27 ;
#define ADMUX_REG ((volatile ADMUX_t *)0x27)
/***********************************************************************************/
/***********************************************************************************/
typedef struct{
    u8 RESERVED : 5 ;
    u8 ADTS    : 3 ;
}SFIOR_t;

//volatile SFIOR_t *SFIOR_REG = 0x50 ;
#define SFIOR_REG ((volatile SFIOR_t *)0x50)
/***********************************************************************************/
/***********************************************************************************/
#define ADCH_REG (*(volatile u8*)0x25)
#define ADCL_REG (*(volatile u8*)0x24)
/***********************************************************************************/

#define IDLE 0 
#define BUSY 1 

#endif	/* ADC_PRIVATE_H */

