/* 
 * File:   TMR1_Interface.h
 * Author: Ahmed Elbasioney 
 *
 * Created on August 10, 2023, 12:56 PM
 */

#ifndef TMR1_INTERFACE_H
#define	TMR1_INTERFACE_H

#include "../../LIB/STD_TYPES.h"

#define TMR1_ICU_FALLING_EDGE  0 
#define TMR1_ICU_RISING_EDGE   1 

void TMR1_Init(void (*TMR1_Interrupt_Handler)(void));
void TMR1_DeInit(void);
void TMR1_ReadCounterValue(u16 *timer1_counter_val);

void TMR1_Pwm_A(u8 pulse_width);
void TMR1_Pwm_B(u8 pulse_width);

void TMR1_PwnInit_B(void);

void TMR1_PwnInit_A(void);


void TMR1_ICU_Init(void (*Copy_ICU1_Interrupt_Handler)(void));
void TMR1_ICU_DeInit(void);

void TMR1_ICU_Edge(u8 edge_mode);
u16 TMR1_ICU_ReadInputCapture(void);

#endif	/* TMR1_INTERFACE_H */

