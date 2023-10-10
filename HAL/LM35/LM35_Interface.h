/* 
 * File:   LM35_Interface.h
 * Author: LENOVO
 *
 * Created on August 6, 2023, 10:21 AM
 */

#ifndef LM35_INTERFACE_H
#define	LM35_INTERFACE_H

#include "../../LIB/STD_TYPES.h"


void LM35_Init(void);
void LM35_ReadTempratue(u8 ADC_Channel , u16 *Temp);

#endif	/* LM35_INTERFACE_H */

