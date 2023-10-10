/* 
 * File:   LED_Interface.h
 * Author: LENOVO
 *
 * Created on July 25, 2023, 10:15 AM
 */

#ifndef LED_INTERFACE_H
#define	LED_INTERFACE_H

#include "../../MCAL/DIO/DIO_Interface.h"

void LED_On( u8 port , u8 led);
void LED_Off( u8 port , u8 led);
void LED_Toggle( u8 port , u8 led);

#endif	/* LED_INTERFACE_H */

