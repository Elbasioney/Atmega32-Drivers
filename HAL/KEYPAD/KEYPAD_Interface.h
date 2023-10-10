/* 
 * File:   KEYPAD_Interface.h
 * Author: LENOVO
 *
 * Created on July 26, 2023, 9:14 PM
 */

#ifndef KEYPAD_INTERFACE_H
#define	KEYPAD_INTERFACE_H

#include "../../LIB/STD_TYPES.h"

typedef struct {
    u8 port : 2 ;
    u8 pin  : 3 ; 
}keypad_pin_t;



typedef struct {
    keypad_pin_t rows[4] ;
    keypad_pin_t columns[4] ;  
}keypad_t;


void KEYPAD_Init(keypad_t *my_keypad);
void KEYPAD_ReadChar(keypad_t *my_keypad , u8 *ch);


#endif	/* KEYPAD_INTERFACE_H */

