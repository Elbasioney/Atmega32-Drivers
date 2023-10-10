/* 
 * File:   OS_Private.h
 * Author: LENOVO
 *
 * Created on September 26, 2023, 11:00 AM
 */

#ifndef OS_PRIVATE_H
#define	OS_PRIVATE_H

typedef struct {
    void (*Func)(void);
    u32 periodicity ;
    u8 Task_ID ;
    u32 First_Delay ;
    u8 status ; 
}TASK_t;


#endif	/* OS_PRIVATE_H */

