/* 
 * File:   TWI_App.c
 * Author: Ahmed Elbasioney
 *
 * Created on August 19, 2023, 10:19 AM
 */

#include "TWI_Config.h"
#include "TWI_Interface.h"
#include "TWI_Private.h"
#include "../../LIB/STD_TYPES.h"
#include "../DIO/DIO_Interface.h"




void TWI_Init(void){
    TWBR_REG = 0x02 ; 
    TWCR_REG->TWEN = TWI_ENABLED ; 
    TWSR_REG->TWPS = TWI_SET_PRESCALER ; 
    TWAR_REG->TWA = TWI_SLAVE_ADDRESS ; 
}


void TWI_Start(void){
    TWCR_REG->TWSTA = 1  ;
    TWCR_REG->TWEN  = TWI_ENABLED  ;
    TWCR_REG->TWINT = 1  ;
    
    
    while( TWCR_REG->TWINT == TWI_BUSY );
    
}
void TWI_Stop(void){
    TWCR_REG->TWSTO = 1  ;
    TWCR_REG->TWEN  = TWI_ENABLED  ;
    TWCR_REG->TWINT = 1  ;
}
void TWI_Write(u8 data){
    TWDR_REG = data ; 
    TWCR_REG->TWEN  = TWI_ENABLED  ;
    TWCR_REG->TWINT = 1  ;
    while( TWCR_REG->TWINT == TWI_BUSY );
}
void TWI_Read(u8 *data)
{
    TWCR_REG->TWEN  = TWI_ENABLED  ;
    TWCR_REG->TWINT = 1  ;
	while( TWCR_REG->TWINT == TWI_BUSY );
    
	*data = TWDR_REG ;
}

void TWI_Status(u8 *twi_status){
    u8 status;
	status = TWSR_REG->TWS ;
    *twi_status = status ;
}


void TWI_SetSlaveAddress(u8 add){
    TWAR_REG->TWA = add & 0b01111111 ; 
}