/*
* Author  : Ahmed Elbasioney
* Date    : 24 Jule 2023
* Version : V-01
*/

#ifndef BIT_MATH_H_INCLUDED
#define BIT_MATH_H_INCLUDED

#define SET_BIT(VAR,BIT)  (VAR |=  ( 1 << (BIT)))
#define CLR_BIT(VAR,BIT)  (VAR &= ~( 1 << (BIT)))
#define GET_BIT(VAR,BIT)  ((VAR >> BIT) & 1)
#define TOG_BIT(VAR,BIT)  (VAR ^=  ( 1 << (BIT)))

#endif // BIT_MATH_H_INCLUDED
