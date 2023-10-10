/* 
 * File:   TMR1_Config.h
 * Author: Ahmed Elbasioney 
 *
 * Created on August 10, 2023, 12:57 PM
 */

#ifndef TMR1_CONFIG_H
#define	TMR1_CONFIG_H

#define TIMER1_PRELOADED_VALUE 0

/**********************************************************/
#define TMR1_OVERFLOW_INTERRUPT_ENABLE    1 
#define TMR1_OVERFLOW_INTERRUPT_DISABLE   0 

#define TMR1_ON_CAMPARE_MATCH_A_INTERRUPT_ENABLE   1 
#define TMR1_ON_CAMPARE_MATCH_A_INTERRUPT_DISABLE  0 

#define TMR1_ON_CAMPARE_MATCH_B_INTERRUPT_ENABLE   1 
#define TMR1_ON_CAMPARE_MATCH_B_INTERRUPT_DISABLE  0 

/***********************************************************/
#define TMR1_NO_CLOCK_SOURCE               0 
#define TMR1_INPUT_CLOCK_SOURCE            1 
#define TMR1_CLOCK_SOURCE_DIV_BY_8         2 
#define TMR1_CLOCK_SOURCE_DIV_BY_64        3 
#define TMR1_CLOCK_SOURCE_DIV_BY_256       4 
#define TMR1_CLOCK_SOURCE_DIV_BY_1024      5 
#define TMR1_COUNTER_MODE_ON_FALLING_EDGE  6 
#define TMR1_COUNTER_MODE_ON_RISING_EDGE   7 
/*
 *  definition : Select TMR1 clock source 
 *  modes : Select from upper choices
 */
#define TMR1_SET_CLOCK_SELECT    TMR1_CLOCK_SOURCE_DIV_BY_256
/***********************************************************/

/***********************************************************/
#define TMR1_NORMAL_MODE              0 
#define TMR1_PWM_MODE_8BIT            1 
#define TMR1_PWM_MODE_9BIT            2 
#define TMR1_PWM_MODE_10BIT           3 
#define TMR1_CTC_MODE                 4
#define TMR1_FAST_PWM_MODE_8BIT       5 
#define TMR1_FAST_PWM_MODE_9BIT       6 
#define TMR1_FAST_PWM_MODE_10BIT      7 
/*
 *  definition : Select TMR1 mode
 *  modes : Select from upper choices
 */
#define TMR1_SET_MODE  TMR1_NORMAL_MODE
/***********************************************************/

/***********************************************************/
#define TMR1_COMPARE_MATCH_ENABLE_A      1 
#define TMR1_COMPARE_MATCH_ENABLE_B      1 
#define TMR1_COMPARE_MATCH_DISABLE_A     0 
#define TMR1_COMPARE_MATCH_DISABLE_B     0 
/*
 *  definition : Select TMR1 compare match status for channel A , B 
 *  modes : Select from upper choices
 */
#define TMR1_SET_COMPARE_MATCH_STATUS_A  TMR1_COMPARE_MATCH_DISABLE_A
#define TMR1_SET_COMPARE_MATCH_STATUS_B  TMR1_COMPARE_MATCH_DISABLE_B
/***********************************************************/

/***********************************************************/
#define TMR1_COMPARE_MATCH_NORMAL_PORT_OPERATION      0 
#define TMR1_COMPARE_MATCH_TOGGLE_PIN                 1 
#define TMR1_COMPARE_MATCH_CLEAR_PIN                  2 
#define TMR1_COMPARE_MATCH_SET_PIN                    3 
/*
 *  definition : Select TMR1 on compare match pin reaction  
 *  modes : Select from upper choices
 */
#define TMR1_SET_COMPARE_MATCH_REACTION_A  TMR1_COMPARE_MATCH_NORMAL_PORT_OPERATION
#define TMR1_SET_COMPARE_MATCH_REACTION_B  TMR1_COMPARE_MATCH_NORMAL_PORT_OPERATION
/***********************************************************/

/***********************************************************/
#define TMR1_INPUT_CAPTURE_ON_FALLING_EDGE     0 
#define TMR1_INPUT_CAPTURE_ON_RISING_EDGE      1 
/*
 *  definition : Select TMR1 Input Capture Edge Select
 *  modes : Select from upper choices
 */
#define TMR1_SET_INPUT_CAPTURE_EDGE  TMR1_INPUT_CAPTURE_ON_RISING_EDGE
/***********************************************************/


#endif	/* TMR1_CONFIG_H */

