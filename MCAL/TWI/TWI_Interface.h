/* 
 * File:   TWI_Interface.h
 * Author: Ahmed Elbasioney
 *
 * Created on August 19, 2023, 10:19 AM
 */

#ifndef TWI_INTERFACE_H
#define	TWI_INTERFACE_H

#include "../../LIB/STD_TYPES.h"


void TWI_Init(void);
void TWI_Start(void);
void TWI_Stop(void);
void TWI_Write(u8 data);
void TWI_Read(u8 *data);
void TWI_Status(u8 *twi_status);
void TWI_SetSlaveAddress(u8 add);
#endif	/* TWI_INTERFACE_H */

