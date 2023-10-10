#include "GIE_Config.h"
#include "GIE_Interface.h"
#include "GIE_Private.h"
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"



void GIE_InterruptEnable(void){
    SET_BIT(SREG_REG , SREG_I);
   
    
}


void GIE_InterruptDisable(void){
    CLR_BIT(SREG_REG , SREG_I);
   
   
    
}
