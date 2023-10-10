/* 
 * File:   UART_Interface.h
 * Author: Ahmed Elbasioney
 *
 * Created on August 15, 2023, 9:11 AM
 */

#ifndef UART_INTERFACE_H
#define	UART_INTERFACE_H

#include "../../LIB/STD_TYPES.h"


void UART_Init(void);
void UART_SendChar(u8 _char);
void UART_SendString(u8 *_char);

void UART_Receiver(void (*Copy_UART_REC_INTERRUPT_HANDLER)(void));
void UART_ReadRegisterValue(u8 *_char);

#endif	/* UART_INTERFACE_H */

