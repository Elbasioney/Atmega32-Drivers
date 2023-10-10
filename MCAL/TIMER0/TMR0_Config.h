/* 
 * File:   TMR0_Config.h
 * Author: LENOVO
 *
 * Created on August 5, 2023, 9:40 AM
 */

#ifndef TMR0_CONFIG_H
#define	TMR0_CONFIG_H


#define TCNT0_REG_VALUE 130


/***********************************************************/
#define TMR0_NO_CLOCK_SOURCE               0 
#define TMR0_INPUT_CLOCK_SOURCE            1 
#define TMR0_CLOCK_SOURCE_DIV_BY_8      2 
#define TMR0_CLOCK_SOURCE_DIV_BY_64     3 
#define TMR0_CLOCK_SOURCE_DIV_BY_256    4 
#define TMR0_CLOCK_SOURCE_DIV_BY_1024   5 
#define TMR0_COUNTER_MODE_ON_FALLING_EDGE  6 
#define TMR0_COUNTER_MODE_ON_RISING_EDGE   7 
/*
 *  definition : Select TMR0 clock source 
 *  modes : Select from upper  choices
 */
#define TMR0_SET_CLOCK_SELECT TMR0_CLOCK_SOURCE_DIV_BY_64
/***********************************************************/
/***********************************************************/
#define TMR0_NORMAL_MODE     0 
#define TMR0_PWM_MODE        1 
#define TMR0_CTC_MODE        2 
#define TMR0_FAST_PWM        3 
/*
 *  definition : Select TMR0 mode
 *  modes : TMR0_NORMAL_MODE , TMR0_PWM_MODE , TMR0_CTC_MODE , TMR0_FAST_PWM
 */
#define TMR0_SET_MODE      TMR0_NORMAL_MODE
/***********************************************************/
/***********************************************************/
#define TMR0_COMPARE_MATCH_OFF     0 
#define TMR0_COMPARE_MATCH_ON      1 
/*
 *  definition : Select TMR0 compare match status
 *  modes : TMR0_COMPARE_MATCH_OFF , TMR0_COMPARE_MATCH_ON
 */
#define TMR0_SET_COMPARE_MATCH_STATUS TMR0_COMPARE_MATCH_OFF
/***********************************************************/

#endif	/* TMR0_CONFIG_H */

