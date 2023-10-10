/* 
 * File:   MOTOR_Interface.h
 * Author: LENOVO
 *
 * Created on July 25, 2023, 6:14 PM
 */

#ifndef MOTOR_INTERFACE_H
#define	MOTOR_INTERFACE_H

#include "../../LIB/STD_TYPES.h"

typedef struct {
    u8 port_1      : 2 ;
    u8 pin_1       : 3 ;
    u8 port_2      : 2 ;
    u8 pin_2       : 3 ; 
}motor_t;
        
        
void MOTOR_Init(motor_t *my_motor);
void MOTOR_TurnRight(motor_t *my_motor);
void MOTOR_TurnLeft(motor_t *my_motor);
void MOTOR_Stop(motor_t *my_motor);

#endif	/* MOTOR_INTERFACE_H */

