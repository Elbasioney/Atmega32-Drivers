/* 
 * File:   LCD_Private.h
 * Author: LENOVO
 *
 * Created on July 26, 2023, 8:41 AM
 */

#ifndef LCD_PRIVATE_H
#define	LCD_PRIVATE_H

#define LCD_CLEAR           0x01  // Clears the display and returns cursor to the home position
#define LCD_HOME            0x02  // Returns cursor to the home position
#define LCD_ENTRY_MODE      0x06  // Sets the cursor move direction and specifies display shift
#define LCD_DISPLAY_OFF     0x08  // Turns off the display
#define LCD_DISPLAY_ON      0x0C  // Turns on the display without cursor
#define LCD_CURSOR_ON       0x0E  // Turns on both the display and cursor
#define LCD_CURSOR_BLINK    0x0F  // Turns on both the display and cursor and makes the cursor blink
#define LCD_MOVE_CURSOR_LEFT     0x10  // Moves the cursor to the left by one position
#define LCD_MOVE_CURSOR_RIGHT     0x14  // Moves the cursor to the right by one position
#define LCD_SHIFT_DISPLAY   0x18  // Shifts the display to the right by one position
#define LCD_SET_CGRAM_ADDR  0x40  // Sets the CGRAM address
#define LCD_SET_DDRAM_ADDR  0x80  // Sets the DDRAM address
#define LCD_SET_8BIT_MODE   0x38  // sets the lcd mode to 8bit mode
#define LCD_SET_4BIT_MODE   0X28  // sets the lcd mode to 4bit mode

#endif	/* LCD_PRIVATE_H */

