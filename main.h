/* 
 * File:   main.h
 * Author: Ahmed Elbasioney 
 *
 * Created on July 25, 2023, 6:52 PM
 */

#ifndef MAIN_H
#define	MAIN_H

/**********Microcontroller Pre-Configurations*********/
#define F_CPU 8000000UL
/*****************************************************/

/*******************Includes Section******************/
#include "LIB/BIT_MATH.h"
#include "LIB/STD_TYPES.h"
#include "LIB/Helper_Functions.h"
#include <avr/io.h>
#include <util/delay.h>
#include "MCAL/DIO/DIO_Interface.h"
#include "HAL/LED/LED_Interface.h"
#include "HAL/7_Segments/7Seg_Interface.h"
#include "HAL/MOTOR/MOTOR_Interface.h"
#include "HAL/LCD/LCD_Interface.h"
#include "HAL/KEYPAD/KEYPAD_Interface.h"
#include "MCAL/GIE/GIE_Interface.h"
#include "MCAL/INTERRUPT/INT_Interface.h"
#include "MCAL/ADC/ADC_Interface.h"
#include "MCAL/TIMER0/TMR0_Interface.h"
#include "HAL/LM35/LM35_Interface.h"
#include "MCAL/TIMER1/TMR1_Interface.h"
#include "MCAL/WDT/WDT_Interface.h"
#include "MCAL/UART/UART_Interface.h"
#include "MCAL/SPI/SPI_Interface.h"
#include "MCAL/TWI/TWI_Interface.h"
#include "MCAL/PORT/PORT_Interface.h"
#include "MCAL/SLEEP/SLEEP_Interface.h"
#include "OS/OS_Interface.h"
/******************************************************/

/*************Pre-defined objects**********************/

lcd_t lcd_1 = {
  .data_pins[0].port = PORT_C , 
  .data_pins[1].port = PORT_C ,
  .data_pins[2].port = PORT_C ,
  .data_pins[3].port = PORT_C ,
  .data_pins[4].port = PORT_C ,
  .data_pins[5].port = PORT_C ,
  .data_pins[6].port = PORT_C ,
  .data_pins[7].port = PORT_C ,
  .data_pins[0].pin = PIN_0 , 
  .data_pins[1].pin = PIN_1 ,
  .data_pins[2].pin = PIN_2 ,
  .data_pins[3].pin = PIN_3 ,
  .data_pins[4].pin = PIN_4 ,
  .data_pins[5].pin = PIN_5 ,
  .data_pins[6].pin = PIN_6 ,
  .data_pins[7].pin = PIN_7 ,
  .en_pin.port = PORT_D ,
  .en_pin.pin = PIN_0 ,
  .rs_pin.port = PORT_D ,
  .rs_pin.pin = PIN_1 ,
};
lcd_t lcd_2 = {
  .data_pins[0].port = PORT_C , 
  .data_pins[1].port = PORT_C ,
  .data_pins[2].port = PORT_C ,
  .data_pins[3].port = PORT_C , 
  .data_pins[0].pin = PIN_0 , 
  .data_pins[1].pin = PIN_1 ,
  .data_pins[2].pin = PIN_2 ,
  .data_pins[3].pin = PIN_3 ,
  .en_pin.port = PORT_D ,
  .en_pin.pin = PIN_0 ,
  .rs_pin.port = PORT_D ,
  .rs_pin.pin = PIN_1 ,
};
keypad_t keypad_1 = {
  .columns[0].port = PORT_A ,
  .columns[1].port = PORT_A ,
  .columns[2].port = PORT_A ,
  .columns[3].port = PORT_A ,
  .rows[0].port = PORT_A ,
  .rows[1].port = PORT_A ,
  .rows[2].port = PORT_A ,
  .rows[3].port = PORT_A ,
  .columns[0].pin = PIN_4 ,
  .columns[1].pin = PIN_5 ,
  .columns[2].pin = PIN_6 ,
  .columns[3].pin = PIN_7 ,
  .rows[0].pin = PIN_0 ,
  .rows[1].pin = PIN_1 ,
  .rows[2].pin = PIN_2 ,
  .rows[3].pin = PIN_3 ,
};

/*****************************************************************************/

#endif	/* MAIN_H */

