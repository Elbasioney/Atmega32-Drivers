
#include "LED_Config.h"
#include "LED_Interface.h"
#include "LED_Private.h"
#include "../../MCAL/DIO/DIO_Private.h"
#include "../../LIB/BIT_MATH.h"

void LED_On( u8 port , u8 pin){
    switch(port){
        case PORT_A : 
            SET_BIT(DDRA_REG , pin); 
            SET_BIT(PORTA_REG , pin); 
            break ; 
        case PORT_B : 
            SET_BIT(DDRB_REG , pin); 
            SET_BIT(PORTB_REG , pin); 
            break ; 
        case PORT_C : 
            SET_BIT(DDRC_REG , pin); 
            SET_BIT(PORTC_REG , pin); 
            break ; 
        case PORT_D : 
            SET_BIT(DDRD_REG , pin); 
            SET_BIT(PORTD_REG , pin); 
            break ; 
        default : 
            break ; 
    }
    
    
}
void LED_Off( u8 port , u8 pin){
    switch(port){
        case PORT_A : 
            CLR_BIT(DDRA_REG , pin); 
            CLR_BIT(PORTA_REG , pin); 
            break ; 
        case PORT_B : 
            CLR_BIT(DDRB_REG , pin); 
            CLR_BIT(PORTB_REG , pin); 
            break ; 
        case PORT_C : 
            CLR_BIT(DDRC_REG , pin); 
            CLR_BIT(PORTC_REG , pin); 
            break ; 
        case PORT_D : 
            CLR_BIT(DDRD_REG , pin); 
            CLR_BIT(PORTD_REG , pin); 
            break ; 
        default : 
            break ; 
    }
    
    
}
void LED_Toggle( u8 port , u8 pin){
    switch(port){
        case PORT_A : 
            
            TOG_BIT(PORTA_REG , pin); 
            break ; 
        case PORT_B : 
            
            TOG_BIT(PORTB_REG , pin); 
            break ; 
        case PORT_C : 
            
            TOG_BIT(PORTC_REG , pin); 
            break ; 
        case PORT_D : 
            
            TOG_BIT(PORTD_REG , pin); 
            break ; 
        default : 
            break ; 
    }
    
    
}
