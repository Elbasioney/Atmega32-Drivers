/* 
 * File:   UART_Config.h
 * Author: Ahmed Elbasioney
 *
 * Created on August 15, 2023, 9:10 AM
 */

#ifndef UART_CONFIG_H
#define	UART_CONFIG_H

/******************************************************************************/

#define BAUD_RATE_9600    51 
#define BAUD_RATE_115200  3
/*
 *  Definition : Set your baud rate 
 *  Choices    : Choose from above 
 */
#define BAUD_RATE_SET_SPEED   BAUD_RATE_9600

/******************************************************************************/


/******************************************************************************/

#define DATA_SIZE_5BIT    0 
#define DATA_SIZE_6BIT    1
#define DATA_SIZE_7BIT    2
#define DATA_SIZE_8BIT    3
#define DATA_SIZE_9BIT    7
/*
 *  Definition : Set your data size 
 *  Choices    : Choose from above  from  5 --> 9 bits 
 */
#define DATA_SIZE_SET_SIZE   DATA_SIZE_8BIT

/******************************************************************************/

#endif	/* UART_CONFIG_H */

