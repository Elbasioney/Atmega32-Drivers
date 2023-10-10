#include "SLEEP_Config.h"
#include "SLEEP_Interface.h"
#include "SLEEP_Private.h"
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"


void SLEEP_SelectMode(u8 sleep_mode){
    MCUCR->SM = sleep_mode ;
    
}

void SLEEP_Enable(void){
    
    
    MCUCR->SE = 1 ; 
    __asm__ __volatile__("sleep");
}

void SLEEP_Disable(void){
    MCUCR->SE = 0 ;
}