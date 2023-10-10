/* 
 * File:   TMR0_Interface.h
 * Author: LENOVO
 *
 * Created on August 5, 2023, 9:39 AM
 */

#ifndef TMR0_INTERFACE_H
#define	TMR0_INTERFACE_H

#include "../../LIB/STD_TYPES.h"

void TMR0_Init(void (*Copy_TMR0_INT_HANDLER)(void));
void TMR0_DeInit(void);
void TMR0_Pwm(u8 pulse_width);
void TMR0_ReadCounterValue(u8 *counter_ret_val );

#endif	/* TMR0_INTERFACE_H */


