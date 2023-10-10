/* 
 * File:   WDT_App.c
 * Author: Ahmed Elbasioney
 *
 * Created on August 13, 2023, 9:46 AM
 */

#include "WDT_Config.h"
#include "WDT_Interface.h"
#include "WDT_Private.h"
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"

void __vector_0(void) __attribute__((signal));
void (*WDT_INTERRUPT_HANDLER)(void) = NULL ; 

void WDT_Enable(void){
    WDTCR_REG->WDP = WDT_SET_RESET_TIME ;
    WDTCR_REG->WDE = WDT_ENABLE ; 
}
void WDT_Disable(void){
    WDTCR_REG->WDP = 1 ;
    WDTCR_REG->WDE = 1 ; 
}






void __vector_0(void){
    
   
    
}








