/* 
 * File:   TWI_Config.h
 * Author: Ahmed Elbasioney
 *
 * Created on August 19, 2023, 10:19 AM
 */

#ifndef TWI_CONFIG_H
#define	TWI_CONFIG_H


#define TWI_SLAVE_ADDRESS  1 



/******************************************************************************/

#define TWI_PRESCALER_DIV_BY_1   0
#define TWI_PRESCALER_DIV_BY_4   1
#define TWI_PRESCALER_DIV_BY_16  2
#define TWI_PRESCALER_DIV_BY_64  3 
/* 
 *  Definition : Select TWI prescaler 
 *  Options    : Select from above  
 */
#define TWI_SET_PRESCALER  TWI_PRESCALER_DIV_BY_1

/******************************************************************************/






#endif	/* TWI_CONFIG_H */

