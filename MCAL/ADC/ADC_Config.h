/* 
 * File:   ADC_Config.h
 * Author: Ahmed Elbasioney
 *
 * Created on August 1, 2023, 12:53 PM
 */

#ifndef ADC_CONFIG_H
#define	ADC_CONFIG_H
/****************************************************/
#define ADC_PRESCALER_2    1
#define ADC_PRESCALER_4    2
#define ADC_PRESCALER_8    3
#define ADC_PRESCALER_16   4
#define ADC_PRESCALER_32   5
#define ADC_PRESCALER_64   6
#define ADC_PRESCALER_128  7
/*
 *  Select the ADC prescaler value 
 *  Options : ADC_PRESCALER_2 ,ADC_PRESCALER_4 
 *  , ADC_PRESCALER_8 , ADC_PRESCALER_16  
 *  , ADC_PRESCALER_32 , ADC_PRESCALER_64 
 *  , ADC_PRESCALER_128
 */

#define ADC_SET_PRESCALER ADC_PRESCALER_128
/***************************************************/

#define ADC_EXTERNAL_AREF              0 
#define ADC_INTERNAL_AVCC              1 
#define ADC_INTERNAL_AREF_LOW_VOLTAGE  3 
/*
 *  Select the ADC voltage refrence value 
 *  Options : ADC_EXTERNAL_AREF ,ADC_INTERNAL_AVCC 
 *            , ADC_INTERNAL_AREF_LOW_VOLTAGE 
 */

#define ADC_SET_VOLTAGE_REF ADC_INTERNAL_AVCC
/***************************************************/
#define ADC_Free_Running_mode 0
#define ADC_TIMER0_OVERFLOW 4 
/*
 *  Select the ADC Auto trigger mode  
 *  Options : ADC_Free_Running_mode ,ADC_INTERNAL_AVCC 
 *            , ADC_INTERNAL_AREF_LOW_VOLTAGE 
 */

#define ADC_Auto_Trigger_Source ADC_TIMER0_OVERFLOW

/***************************************************/

#define ADC_CHANNEL_0  0
#define ADC_CHANNEL_1  1
#define ADC_CHANNEL_2  2
#define ADC_CHANNEL_3  3
#define ADC_CHANNEL_4  4
#define ADC_CHANNEL_5  5
#define ADC_CHANNEL_6  6
#define ADC_CHANNEL_7  7
/*
 *  Select the ADC channel 
 *  Options : ADC_EXTERNAL_AREF ,ADC_INTERNAL_AVCC 
 *            , ADC_INTERNAL_AREF_LOW_VOLTAGE 
 */
#define ADC_SET_DEFAULT_CHANNEL ADC_CHANNEL_0

/***************************************************/

#define ADC_CONVERSION_RIGHT_JUSTIFIED  0 
#define ADC_CONVERSION_LEFT_JUSTIFIED   1 
/*
 *  Select ADC conversion write mde  
 *  Options : ADC_CONVERSION_RIGHT_JUSTIFIED , ADC_CONVERSION_LEFT_JUSTIFIED  
 */
#define ADC_SET_JUSTIFICATION  ADC_CONVERSION_RIGHT_JUSTIFIED

#endif	/* ADC_CONFIG_H */

