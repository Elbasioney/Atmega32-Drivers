/* 
 * File:   INT0_Interface.h
 * Author: LENOVO
 *
 * Created on July 31, 2023, 11:06 PM
 */

#ifndef INT0_INTERFACE_H
#define	INT0_INTERFACE_H



void INT0_Init(void (*Copy_INT0_Interrupt_Handler)(void));
void INT1_Init(void (*Copy_INT1_Interrupt_Handler)(void));
void INT2_Init(void (*Copy_INT2_Interrupt_Handler)(void));

#endif	/* INT0_INTERFACE_H */

