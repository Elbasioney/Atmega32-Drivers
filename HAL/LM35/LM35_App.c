#include "LM35_Config.h"
#include "LM35_Interface.h"
#include "LM35_Private.h"
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"
#include "../../MCAL/ADC/ADC_Interface.h"
#include "../../MCAL/ADC/ADC_Private.h"

void LM35_Init(void){
    ADC_Init(); 
}

void LM35_ReadTempratue(u8 ADC_Channel , u16 *Temp){
    u16 temp_adc_ret = 0 ; 
    temp_adc_ret = ADC_ReadConversion(ADC_Channel);
    f32 temp_calc = ((temp_adc_ret * .00488) * 100 ) ; 
    *Temp = (u16)temp_calc ;
}
