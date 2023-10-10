/* 
 * File:   OS_Interface.h
 * Author: LENOVO
 *
 * Created on September 26, 2023, 11:00 AM
 */

#ifndef OS_INTERFACE_H
#define	OS_INTERFACE_H

#include "../LIB/STD_TYPES.h"




void OS_CreateTask(u8 Task_ID , u32 periodicity , u32 First_Delay  , void (*Func)(void));
void OS_Start(void);





#endif	/* OS_INTERFACE_H */

