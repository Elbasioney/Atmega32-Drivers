/* 
 * File:   LCD_Interface.h
 * Author: LENOVO
 *
 * Created on July 26, 2023, 8:41 AM
 */

#ifndef LCD_INTERFACE_H
#define	LCD_INTERFACE_H

#include "LCD_Config.h"

#include "../../LIB/STD_TYPES.h"



#if _LCD_SIZE == _LCD_4ROW_20COLUMN

#define ROW1 0
#define ROW2 1
#define ROW3 2
#define ROW4 3

#define COLUMN1  0
#define COLUMN2  1
#define COLUMN3  2
#define COLUMN4  3
#define COLUMN5  4
#define COLUMN6  5
#define COLUMN7  6
#define COLUMN8  7
#define COLUMN9  8
#define COLUMN10 9
#define COLUMN11 10
#define COLUMN12 11
#define COLUMN13 12
#define COLUMN14 13
#define COLUMN15 14
#define COLUMN16 15
#define COLUMN17 16
#define COLUMN18 17
#define COLUMN19 18
#define COLUMN20 19

#elif _LCD_SIZE == _LCD_2ROW_16COLUMN

#define ROW1 0
#define ROW2 1

#define COLUMN1  0
#define COLUMN2  1
#define COLUMN3  2
#define COLUMN4  3
#define COLUMN5  4
#define COLUMN6  5
#define COLUMN7  6
#define COLUMN8  7
#define COLUMN9  8
#define COLUMN10 9
#define COLUMN11 10
#define COLUMN12 11
#define COLUMN13 12
#define COLUMN14 13
#define COLUMN15 14
#define COLUMN16 15

#endif 

#define LCD_CURSOR_BLINK_ON  1 
#define LCD_CURSOR_BLINK_OFF 0

typedef struct{
    u8 port : 2 ;
    u8 pin  : 3 ;   
}lcd_pin_t;    


#if _LCD_MODE == _LCD_8BIT_MODE

typedef struct {
    lcd_pin_t data_pins[8] ;
    lcd_pin_t rs_pin ;
    lcd_pin_t en_pin ;
}lcd_t;

#elif _LCD_MODE == _LCD_4BIT_MODE

typedef struct {
    lcd_pin_t data_pins[4] ;
    lcd_pin_t rs_pin ;
    lcd_pin_t en_pin ;
}lcd_t;

#endif 


void LCD_Init(lcd_t *my_lcd);
void LCD_WriteChar(lcd_t *my_lcd , u8 ch);
void LCD_WriteString( lcd_t *my_lcd , u8 *str);

void LCD_Clear(lcd_t *my_lcd);
void LCD_SetCursor(lcd_t *my_lcd , u8 row , u8 column);
void LCD_WriteCustomChar(lcd_t *my_lcd , u8 _char[] , u8 mem_pos , u8 row , u8 column);
void LCD_CursorBlinking(lcd_t *my_lcd , u8 cursorstatus);
void LCD_MoveCursorRight(lcd_t *my_lcd);
void LCD_MoveCursorLeft(lcd_t *my_lcd);
#endif	/* LCD_INTERFACE_H */

