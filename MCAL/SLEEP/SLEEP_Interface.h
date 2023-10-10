#ifndef _SLEEP_INTERFACE_H_
#define _SLEEP_INTERFACE_H_

#include "../../LIB/STD_TYPES.h"

#define SLEEP_IDLE_MODE                 0 
#define SLEEP_ADC_NOISE_REDUCTION_MODE  1
#define SLEEP_POWER_DOWN_MODE           2
#define SLEEP_POWER_SAVE_MODE           3
#define SLEEP_STAND_BY_MODE             6
#define SLEEP_EXTENDED_STAND_BY_MODE    7




void SLEEP_SelectMode(u8 sleep_mode);
void SLEEP_Enable(void);
void SLEEP_Disable(void);




#endif 

