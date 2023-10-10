#ifndef DIO_INTERFACE_H_INCLUDED
#define DIO_INTERFACE_H_INCLUDED

#include "../../LIB/STD_TYPES.h"

#define PORT_A 0
#define PORT_B 1
#define PORT_C 2
#define PORT_D 3

#define PIN_0 0
#define PIN_1 1
#define PIN_2 2
#define PIN_3 3
#define PIN_4 4
#define PIN_5 5
#define PIN_6 6
#define PIN_7 7

#define INPUT  0
#define OUTPUT 1

#define HIGH 1
#define LOW 0

#define ALL_PORT_OUTPUT 0xFF
#define ALL_PORT_INPUT  0x00

void DIO_PinInit(u8 port , u8 pin , u8 direction);
void DIO_PinWrite(u8 port , u8 pin , u8 logic);
u8 DIO_PinRead(u8 port , u8 pin);
void DIO_PinToggle(u8 port, u8 pin);


void DIO_PortInit(u8 port , u8 directions);
void DIO_PortWrite(u8 port ,u8 logic );
u8 DIO_PortRead(u8 port);

#endif // DIO_INTERFACE_H_INCLUDED
