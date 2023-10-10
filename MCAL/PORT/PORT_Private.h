/* 
 * File:   PORT_Private.h
 * Author: Ahmed Elbasioney
 *
 * Created on August 26, 2023, 8:44 PM
 */

#ifndef PORT_PRIVATE_H
#define	PORT_PRIVATE_H

#include "../../LIB/STD_TYPES.h"

/******************************************************************************/
typedef union{
    struct{
        u8 _PIN0  : 1 ;
        u8 _PIN1  : 1 ;
        u8 _PIN2  : 1 ;
        u8 _PIN3  : 1 ;
        u8 _PIN4  : 1 ;
        u8 _PIN5  : 1 ;
        u8 _PIN6  : 1 ;
        u8 _PIN7  : 1 ;
    };
    struct{
        u8 LOWER_NIPPLE  : 4 ;
        u8 HIGHER_NIPPLE : 4 ; 
    };
    struct{
        u8 FIRST_TWO_BITS   : 2 ;
        u8 SECOND_TWO_BITS  : 2 ; 
        u8 THIRD_TWO_BITS   : 2 ;
        u8 FOURTH_TWO_BITS  : 2 ;
    };
    
    
}SPECIAL_PORTA_REG_t;

#define SPECIAL_PORTA_REG ((volatile SPECIAL_PORTA_REG_t*)0x3B)
/******************************************************************************/


/******************************************************************************/
typedef union{
    struct{
        u8 _PIN0  : 1 ;
        u8 _PIN1  : 1 ;
        u8 _PIN2  : 1 ;
        u8 _PIN3  : 1 ;
        u8 _PIN4  : 1 ;
        u8 _PIN5  : 1 ;
        u8 _PIN6  : 1 ;
        u8 _PIN7  : 1 ;
    };
    struct{
        u8 LOWER_NIPPLE  : 4 ;
        u8 HIGHER_NIPPLE : 4 ; 
    };
    struct{
        u8 FIRST_TWO_BITS   : 2 ;
        u8 SECOND_TWO_BITS  : 2 ; 
        u8 THIRD_TWO_BITS   : 2 ;
        u8 FOURTH_TWO_BITS  : 2 ;
    };
    
    
}SPECIAL_DDRA_REG_t;

#define SPECIAL_DDRA_REG ((volatile SPECIAL_DDRA_REG_t*)0x3A)
/******************************************************************************/


/******************************************************************************/
typedef union{
    struct{
        u8 _PIN0  : 1 ;
        u8 _PIN1  : 1 ;
        u8 _PIN2  : 1 ;
        u8 _PIN3  : 1 ;
        u8 _PIN4  : 1 ;
        u8 _PIN5  : 1 ;
        u8 _PIN6  : 1 ;
        u8 _PIN7  : 1 ;
    };
    struct{
        u8 LOWER_NIPPLE  : 4 ;
        u8 HIGHER_NIPPLE : 4 ; 
    };
    struct{
        u8 FIRST_TWO_BITS   : 2 ;
        u8 SECOND_TWO_BITS  : 2 ; 
        u8 THIRD_TWO_BITS   : 2 ;
        u8 FOURTH_TWO_BITS  : 2 ;
    };
    
    
}SPECIAL_PORTB_REG_t;

#define SPECIAL_PORTB_REG ((volatile SPECIAL_PORTB_REG_t*)0x38)
/******************************************************************************/


/******************************************************************************/
typedef union{
    struct{
        u8 _PIN0  : 1 ;
        u8 _PIN1  : 1 ;
        u8 _PIN2  : 1 ;
        u8 _PIN3  : 1 ;
        u8 _PIN4  : 1 ;
        u8 _PIN5  : 1 ;
        u8 _PIN6  : 1 ;
        u8 _PIN7  : 1 ;
    };
    struct{
        u8 LOWER_NIPPLE  : 4 ;
        u8 HIGHER_NIPPLE : 4 ; 
    };
    struct{
        u8 FIRST_TWO_BITS   : 2 ;
        u8 SECOND_TWO_BITS  : 2 ; 
        u8 THIRD_TWO_BITS   : 2 ;
        u8 FOURTH_TWO_BITS  : 2 ;
    };
    
    
}SPECIAL_DDRB_REG_t;

#define SPECIAL_DDRB_REG ((volatile SPECIAL_DDRB_REG_t*)0x37)
/******************************************************************************/


/******************************************************************************/
typedef union{
    struct{
        u8 _PIN0  : 1 ;
        u8 _PIN1  : 1 ;
        u8 _PIN2  : 1 ;
        u8 _PIN3  : 1 ;
        u8 _PIN4  : 1 ;
        u8 _PIN5  : 1 ;
        u8 _PIN6  : 1 ;
        u8 _PIN7  : 1 ;
    };
    struct{
        u8 LOWER_NIPPLE  : 4 ;
        u8 HIGHER_NIPPLE : 4 ; 
    };
    struct{
        u8 FIRST_TWO_BITS   : 2 ;
        u8 SECOND_TWO_BITS  : 2 ; 
        u8 THIRD_TWO_BITS   : 2 ;
        u8 FOURTH_TWO_BITS  : 2 ;
    };
    
    
}SPECIAL_PORTC_REG_t;

#define SPECIAL_PORTC_REG ((volatile SPECIAL_PORTC_REG_t*)0x35)
/******************************************************************************/


/******************************************************************************/
typedef union{
    struct{
        u8 _PIN0  : 1 ;
        u8 _PIN1  : 1 ;
        u8 _PIN2  : 1 ;
        u8 _PIN3  : 1 ;
        u8 _PIN4  : 1 ;
        u8 _PIN5  : 1 ;
        u8 _PIN6  : 1 ;
        u8 _PIN7  : 1 ;
    };
    struct{
        u8 LOWER_NIPPLE  : 4 ;
        u8 HIGHER_NIPPLE : 4 ; 
    };
    struct{
        u8 FIRST_TWO_BITS   : 2 ;
        u8 SECOND_TWO_BITS  : 2 ; 
        u8 THIRD_TWO_BITS   : 2 ;
        u8 FOURTH_TWO_BITS  : 2 ;
    };
    
    
}SPECIAL_DDRC_REG_t;

#define SPECIAL_DDRC_REG ((volatile SPECIAL_DDRC_REG_t*)0x34)
/******************************************************************************/


/******************************************************************************/
typedef union{
    struct{
        u8 _PIN0  : 1 ;
        u8 _PIN1  : 1 ;
        u8 _PIN2  : 1 ;
        u8 _PIN3  : 1 ;
        u8 _PIN4  : 1 ;
        u8 _PIN5  : 1 ;
        u8 _PIN6  : 1 ;
        u8 _PIN7  : 1 ;
    };
    struct{
        u8 LOWER_NIPPLE  : 4 ;
        u8 HIGHER_NIPPLE : 4 ; 
    };
    struct{
        u8 FIRST_TWO_BITS   : 2 ;
        u8 SECOND_TWO_BITS  : 2 ; 
        u8 THIRD_TWO_BITS   : 2 ;
        u8 FOURTH_TWO_BITS  : 2 ;
    };
    
    
}SPECIAL_PORTD_REG_t;

#define SPECIAL_PORTD_REG ((volatile SPECIAL_PORTD_REG_t*)0x32)
/******************************************************************************/


/******************************************************************************/
typedef union{
    struct{
        u8 _PIN0  : 1 ;
        u8 _PIN1  : 1 ;
        u8 _PIN2  : 1 ;
        u8 _PIN3  : 1 ;
        u8 _PIN4  : 1 ;
        u8 _PIN5  : 1 ;
        u8 _PIN6  : 1 ;
        u8 _PIN7  : 1 ;
    };
    struct{
        u8 LOWER_NIPPLE  : 4 ;
        u8 HIGHER_NIPPLE : 4 ; 
    };
    struct{
        u8 FIRST_TWO_BITS   : 2 ;
        u8 SECOND_TWO_BITS  : 2 ; 
        u8 THIRD_TWO_BITS   : 2 ;
        u8 FOURTH_TWO_BITS  : 2 ;
    };
    
    
}SPECIAL_DDRD_REG_t;

#define SPECIAL_DDRD_REG ((volatile SPECIAL_DDRD_REG_t*)0x31)
/******************************************************************************/

#endif	/* PORT_PRIVATE_H */

