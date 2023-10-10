/* 
 * File:   SPI_Config.h
 * Author: Ahmed Elbasioney
 *
 * Created on August 18, 2023, 6:43 PM
 */

#ifndef SPI_CONFIG_H
#define	SPI_CONFIG_H


/******************************************************************************/
 
#define SPI_CLOCK_RATE_DIV_BY_4    0
#define SPI_CLOCK_RATE_DIV_BY_16   1 
#define SPI_CLOCK_RATE_DIV_BY_64   2 
#define SPI_CLOCK_RATE_DIV_BY_128  3 
/*
 *  Definition : Select SPI CLOCK RATE configuration 
 *  Options    : Select from above 
 */
#define SPI_SET_CLOCK_RATE  SPI_CLOCK_RATE_DIV_BY_16

/******************************************************************************/


/******************************************************************************/
 
#define SPI_SLAVE_MODE    0
#define SPI_MASTER_MODE   1 
/*
 *  Definition : Select SPI CLOCK RATE configuration 
 *  Options    : Select from above 
 */
#define SPI_SET_MODE  SPI_MASTER_MODE

/******************************************************************************/


#endif	/* SPI_CONFIG_H */

