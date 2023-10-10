/* 
 * File:   LCD_Config.h
 * Author: LENOVO
 *
 * Created on July 26, 2023, 8:41 AM
 */

#ifndef LCD_CONFIG_H
#define	LCD_CONFIG_H



#define _LCD_4BIT_MODE 0
#define _LCD_8BIT_MODE 1
/*
 * usage : set the functions into 4bit mode or 8bit mode
 * modes : _LCD_4BIT_MODE , _LCD_8BIT_MODE
 */
#define _LCD_MODE _LCD_8BIT_MODE


#define _LCD_4ROW_20COLUMN 0 
#define _LCD_2ROW_16COLUMN 1
/*
 * usage : select LCD size
 * modes : _LCD_4ROW_20COLUMN  ,  _LCD_2ROW_16COLUMN
 */
#define _LCD_SIZE _LCD_4ROW_20COLUMN


#define _LCD_CURSOR_ON 0 
#define _LCD_CURSOR_OFF 1
#define _LCD_CURSOR_ON_BLINKING_ON 2
/*
 * usage : select LCD Cursor status
 * modes : _LCD_CURSOR_ON  ,  _LCD_CURSOR_OFF , _LCD_CURSOR_ON_BLINKING_ON
 */
#define _LCD_CURSOR_STATUS _LCD_CURSOR_OFF



#endif	/* LCD_CONFIG_H */

