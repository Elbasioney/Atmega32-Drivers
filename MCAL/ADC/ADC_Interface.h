/* 
 * File:   ADC_Interface.h
 * Author: LENOVO
 *
 * Created on August 1, 2023, 12:52 PM
 */

#ifndef ADC_INTERFACE_H
#define	ADC_INTERFACE_H

#include "../../LIB/STD_TYPES.h"
#include "ADC_Config.h"
#define ENABLED  1
#define DISABLED 0

#define ADC_CHANNEL_0  0
#define ADC_CHANNEL_1  1
#define ADC_CHANNEL_2  2
#define ADC_CHANNEL_3  3
#define ADC_CHANNEL_4  4
#define ADC_CHANNEL_5  5
#define ADC_CHANNEL_6  6
#define ADC_CHANNEL_7  7

void ADC_Init(void);
void ADC_DeInit(void);
void ADC_InterruptEnable(void);
void ADC_InterruptDisable(void);
u16 ADC_ReadConversion(u8 channel);
void ADC_ReadConversionAsynchronous(u8 channel , u16 *copy_ADC_Reading ,void (*copy_ADC_InterruptHandler)(void));

#endif	/* ADC_INTERFACE_H */

