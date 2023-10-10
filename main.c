/* 
 * File:   main.c
 * Author: Ahmed Elbasioeny 
 *
 * Created on March 8, 2023, 5:24 PM
 */
#include "main.h"

void Task1_ISR(void);
void Task2_ISR(void);
void Task3_ISR(void);

int main() {
    GIE_InterruptEnable();
    DIO_PinInit(PORT_A , PIN_0 , OUTPUT);
    DIO_PinInit(PORT_A , PIN_1 , OUTPUT);
    DIO_PinInit(PORT_A , PIN_2 , OUTPUT);
    LED_Off(PORT_A , PIN_0);
    LED_Off(PORT_A , PIN_1);
    LED_Off(PORT_A , PIN_2);
    OS_CreateTask(0,1000,1000,Task1_ISR);
    OS_CreateTask(1,2000,1000,Task2_ISR);
    OS_CreateTask(2,3000,1000,Task3_ISR);
    OS_Start();
    while (1) {
        
    }
    return 0;
}

void Task1_ISR(void){
    LED_Toggle(PORT_A , PIN_0);
    
    
}
void Task2_ISR(void){
    LED_Toggle(PORT_A , PIN_1);
    
    
}void Task3_ISR(void){
    LED_Toggle(PORT_A , PIN_2);
    
    
}
