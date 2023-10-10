#include "OS_Config.h"
#include "OS_Interface.h"
#include "OS_Private.h"
#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"
#include "../MCAL/TIMER0/TMR0_Interface.h"

static void Scheduler(void);
static volatile u16 TicksCounter = 0  ;

static TASK_t OS_Tasks[OS_NUMBER_OF_TASKS] = { NULL };

void OS_CreateTask(u8 Task_ID , u32 periodicity , u32 First_Delay  , void (*Func)(void)){
    
    if(NULL == Func){
        
        
        
    }else{
        
        OS_Tasks[Task_ID].periodicity  = periodicity ; 
        OS_Tasks[Task_ID].First_Delay  = First_Delay ;  
        OS_Tasks[Task_ID].Func         =  Func ; 
        
    }
    
    
    
}

void OS_Start(void){
    
    TMR0_Init(Scheduler);
    
    
    
}

static void Scheduler(void){
    TicksCounter++;
    for(int i = 0 ; i < OS_NUMBER_OF_TASKS ; i++){
        if((TicksCounter %  OS_Tasks[i].First_Delay) == 0){
            
            OS_Tasks[i].First_Delay = OS_Tasks[i].periodicity - 1 ; 
            if(NULL == OS_Tasks[i].Func){
                
            }else{
                OS_Tasks[i].Func();
                
            }
            
        }else{
            
            
        }
        
        
    }
    
    if(TicksCounter == 65000){
        TicksCounter = 0 ;
        
    }else{
        
    }
}
