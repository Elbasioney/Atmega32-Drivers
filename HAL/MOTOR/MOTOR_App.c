#include "MOTOR_Config.h"
#include "MOTOR_Interface.h"
#include "MOTOR_Private.h"
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"
#include "../../MCAL/DIO/DIO_Interface.h"
#include "../../MCAL/DIO/DIO_Private.h"



void MOTOR_Init(motor_t *my_motor){
    if(my_motor == NULL){
        
    }else{
        switch(my_motor->port_1){
            case PORT_A :
                SET_BIT(DDRA_REG,my_motor->pin_1);
                break ; 
            case PORT_B :
                SET_BIT(DDRB_REG,my_motor->pin_1);
                break ;
            case PORT_C :
                SET_BIT(DDRC_REG,my_motor->pin_1);
                break ; 
            case PORT_D :
                SET_BIT(DDRD_REG,my_motor->pin_1);
                break ; 
            default :
                break ; 
                
        }
        switch(my_motor->port_2){
            case PORT_A :
                SET_BIT(DDRA_REG,my_motor->pin_2);
                break ; 
            case PORT_B :
                SET_BIT(DDRB_REG,my_motor->pin_2);
                break ;
            case PORT_C :
                SET_BIT(DDRC_REG,my_motor->pin_2);
                break ; 
            case PORT_D :
                SET_BIT(DDRD_REG,my_motor->pin_2);
                break ; 
            default :
                break ; 
                
        }
        
    }
}
void MOTOR_TurnRight(motor_t *my_motor){
    if(my_motor == NULL){
        
    }else{
        switch(my_motor->port_1){
            case PORT_A :
                SET_BIT(PORTA_REG,my_motor->pin_1);
                break ; 
            case PORT_B :
                SET_BIT(PORTB_REG,my_motor->pin_1);
                break ;
            case PORT_C :
                SET_BIT(PORTC_REG,my_motor->pin_1);
                break ; 
            case PORT_D :
                SET_BIT(PORTD_REG,my_motor->pin_1);
                break ; 
            default :
                break ; 
                
        }
        switch(my_motor->port_2){
            case PORT_A :
                CLR_BIT(PORTA_REG,my_motor->pin_2);
                break ; 
            case PORT_B :
                CLR_BIT(PORTB_REG,my_motor->pin_2);
                break ;
            case PORT_C :
                CLR_BIT(PORTC_REG,my_motor->pin_2);
                break ; 
            case PORT_D :
                CLR_BIT(PORTD_REG,my_motor->pin_2);
                break ; 
            default :
                break ; 
                
        }
        
    }
}
void MOTOR_TurnLeft(motor_t *my_motor){
    if(my_motor == NULL){
        
    }else{
        switch(my_motor->port_1){
            case PORT_A :
                CLR_BIT(PORTA_REG,my_motor->pin_1);
                break ; 
            case PORT_B :
                CLR_BIT(PORTB_REG,my_motor->pin_1);
                break ;
            case PORT_C :
                CLR_BIT(PORTC_REG,my_motor->pin_1);
                break ; 
            case PORT_D :
                CLR_BIT(PORTD_REG,my_motor->pin_1);
                break ; 
            default :
                break ; 
                
        }
        switch(my_motor->port_2){
            case PORT_A :
                SET_BIT(PORTA_REG,my_motor->pin_2);
                break ; 
            case PORT_B :
                SET_BIT(PORTB_REG,my_motor->pin_2);
                break ;
            case PORT_C :
                SET_BIT(PORTC_REG,my_motor->pin_2);
                break ; 
            case PORT_D :
                SET_BIT(PORTD_REG,my_motor->pin_2);
                break ; 
            default :
                break ; 
                
        }
        
    }
}
void MOTOR_Stop(motor_t *my_motor){
    if(my_motor == NULL){
        
    }else{
        switch(my_motor->port_1){
            case PORT_A :
                CLR_BIT(PORTA_REG,my_motor->pin_1);
                break ; 
            case PORT_B :
                CLR_BIT(PORTB_REG,my_motor->pin_1);
                break ;
            case PORT_C :
                CLR_BIT(PORTC_REG,my_motor->pin_1);
                break ; 
            case PORT_D :
                CLR_BIT(PORTD_REG,my_motor->pin_1);
                break ; 
            default :
                break ; 
                
        }
        switch(my_motor->port_2){
            case PORT_A :
                CLR_BIT(PORTA_REG,my_motor->pin_2);
                break ; 
            case PORT_B :
                CLR_BIT(PORTB_REG,my_motor->pin_2);
                break ;
            case PORT_C :
                CLR_BIT(PORTC_REG,my_motor->pin_2);
                break ; 
            case PORT_D :
                CLR_BIT(PORTD_REG,my_motor->pin_2);
                break ; 
            default :
                break ; 
                
        }
        
    }
}
