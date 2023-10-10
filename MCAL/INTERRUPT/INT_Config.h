/* 
 * File:   INT0_Config.h
 * Author: LENOVO
 *
 * Created on July 31, 2023, 11:06 PM
 */

#ifndef INT0_CONFIG_H
#define	INT0_CONFIG_H


#define INT_ENABLE  1
#define INT_DISABLE 0

/*
 *  Interrupts modes 
 *  Options : INT_ON_LOW_LEVEL  ,  INT_ON_CHANGE  ,   INT_ON_RAISING_EDGE  ,  INT_ON_FALLING_EDGE  
 */
#define INT_ON_LOW_LEVEL     0
#define INT_ON_CHANGE        1
#define INT_ON_RAISING_EDGE  2
#define INT_ON_FALLING_EDGE  3


#define INT0_STATUS INT_ENABLE
#define INT0_MODE   INT_ON_RAISING_EDGE

#define INT1_STATUS INT_ENABLE
#define INT1_MODE   INT_ON_RAISING_EDGE

// note : INT2 has only two modes ( INT_ON_RAISING_EDGE , INT_ON_FALLING_EDGE )
#define INT2_STATUS INT_ENABLE
#define INT2_MODE   INT_ON_RAISING_EDGE


#endif	/* INT0_CONFIG_H */

