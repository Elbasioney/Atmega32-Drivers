
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"

#include "DIO_Config.h"
#include "DIO_Private.h"
#include "DIO_Interface.h"


void DIO_PinInit(u8 port, u8 pin, u8 direction)
{
    if(direction == INPUT)
    {
        switch(port)
        {
        case PORT_A :
            CLR_BIT(DDRA_REG,pin);
            break ;
        case PORT_B :
            CLR_BIT(DDRB_REG,pin);
            break ;
        case PORT_C :
            CLR_BIT(DDRC_REG,pin);
            break ;
        case PORT_D :
            CLR_BIT(DDRD_REG,pin);
            break ;
        default :
            break ;
        }

    }
    else if(direction == OUTPUT)
    {
        switch(port)
        {
        case PORT_A :
            SET_BIT(DDRA_REG,pin);
            break ;
        case PORT_B :
            SET_BIT(DDRB_REG,pin);
            break ;
        case PORT_C :
            SET_BIT(DDRC_REG,pin);
            break ;
        case PORT_D :
            SET_BIT(DDRD_REG,pin);
            break ;
        default :
            break ;
        }

    }
    else
    {


    }
}
void DIO_PinWrite(u8 port, u8 pin, u8 logic)
{
    if(logic == LOW)
    {
        switch(port)
        {
        case PORT_A :
            CLR_BIT(PORTA_REG,pin);
            break ;
        case PORT_B :
            CLR_BIT(PORTB_REG,pin);
            break ;
        case PORT_C :
            CLR_BIT(PORTC_REG,pin);
            break ;
        case PORT_D :
            CLR_BIT(PORTD_REG,pin);
            break ;
        default :
            break ;
        }

    }
    else if(logic == HIGH)
    {
        switch(port)
        {
        case PORT_A :
            SET_BIT(PORTA_REG,pin);
            break ;
        case PORT_B :
            SET_BIT(PORTB_REG,pin);
            break ;
        case PORT_C :
            SET_BIT(PORTC_REG,pin);
            break ;
        case PORT_D :
            SET_BIT(PORTD_REG,pin);
            break ;
        default :
            break ;
        }

    }
    else
    {


    }
}

u8 DIO_PinRead(u8 port, u8 pin){
    u8 pin_state = 0 ; 
    switch(port)
    {
    case PORT_A :
        pin_state = GET_BIT(PINA_REG,pin);
        break ;
    case PORT_B :
        pin_state =  GET_BIT(PINB_REG,pin);
        break ;
    case PORT_C :
        pin_state = GET_BIT(PINC_REG,pin);
        break ;
    case PORT_D :
        pin_state = GET_BIT(PIND_REG,pin);
        break ;
    default :

        break ;
    }
    return pin_state ;
}

void DIO_PinToggle(u8 port, u8 pin)
{
    switch(port)
    {
    case PORT_A :
        TOG_BIT(PORTA_REG,pin);
        break ;
    case PORT_B :
        TOG_BIT(PORTB_REG,pin);
        break ;
    case PORT_C :
        TOG_BIT(PORTC_REG,pin);
        break ;
    case PORT_D :
        TOG_BIT(PORTD_REG,pin);
        break ;
    default :

        break ;
    }

}



void DIO_PortInit(u8 port, u8 directions)
{
    switch(port)
    {
    case PORT_A :
        DDRA_REG = directions ;
        break ;
    case PORT_B :
        DDRB_REG = directions ;
        break ;
    case PORT_C :
        DDRC_REG = directions ;
        break ;
    case PORT_D :
        DDRD_REG = directions ;
        break ;
    default :
        
        break ;
    }
}

void DIO_PortWrite(u8 port,u8 logic )
{
    switch(port)
    {
    case PORT_A :
        PORTA_REG = logic ;
        break ;
    case PORT_B :
        PORTB_REG = logic ;
        break ;
    case PORT_C :
        PORTC_REG = logic ;
        break ;
    case PORT_D :
        PORTD_REG = logic ;
        break ;
    default :
        
        break ;
    }
}


u8 DIO_PortRead(u8 port)
{ 
    u8 port_state = 0 ; 
    switch(port)
    {
    case PORT_A :
        port_state =  PINA_REG ;
        break ;
    case PORT_B :
        port_state = PINB_REG ;
        break ;
    case PORT_C :
        port_state =  PINC_REG ;
        break ;
    case PORT_D :
        port_state =  PIND_REG ;
        break ;
    default :
        break ;
    }
    return port_state ;
}

