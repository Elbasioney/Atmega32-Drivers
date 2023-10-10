/* 
 * File:   WDT_Config.h
 * Author: Ahmed Elbasioney
 *
 * Created on August 13, 2023, 9:46 AM
 */

#ifndef WDT_CONFIG_H
#define	WDT_CONFIG_H




/**************************************************************************************************/

#define WDT_RESET_ON_16_MS     0  
#define WDT_RESET_ON_32_MS     1  
#define WDT_RESET_ON_65_MS     2  
#define WDT_RESET_ON_130_MS    3  
#define WDT_RESET_ON_260_MS    4  
#define WDT_RESET_ON_520_MS    5  
#define WDT_RESET_ON_1_S       6  
#define WDT_RESET_ON_2_S       7  
/*
 *  definition : This function sets the estimated time to the watch dog timer to reset 
 *  options :  Select from above 
 */

#define WDT_SET_RESET_TIME    WDT_RESET_ON_2_S

/**************************************************************************************************/
#endif	/* WDT_CONFIG_H */

