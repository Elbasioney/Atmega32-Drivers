#define F_CPU 8000000UL
#include <util/delay.h>

#include "LCD_Config.h"
#include "LCD_Interface.h"
#include "LCD_Private.h"
#include "../../LIB/STD_TYPES.h"
#include "../../MCAL/DIO/DIO_Interface.h"
#include "../../LIB/BIT_MATH.h"
#include "../../MCAL/DIO/DIO_Private.h"


static void SetLcdPin(lcd_pin_t *my_pin);
static void LCD_SendPinData(lcd_pin_t *my_pin , u8 logic);
static void LCD_SendEnableSignal(lcd_t *my_lcd1);

#if _LCD_MODE == _LCD_8BIT_MODE
static void LCD_SendCommand_8bit(lcd_t *my_lcd1 , u8 command);
#elif _LCD_MODE == _LCD_4BIT_MODE
static void LCD_SendCommand_4bit(lcd_t *my_lcd1 , u8 command);
#endif

void LCD_Init(lcd_t *my_lcd){
#if _LCD_MODE == _LCD_8BIT_MODE 
    if(NULL == my_lcd){
        
    }else{
        _delay_ms(10);
        SetLcdPin(&my_lcd->rs_pin);
        SetLcdPin(&my_lcd->en_pin);
        for(int i = 0 ; i < 8 ; i++){
            SetLcdPin(&my_lcd->data_pins[i]);
        }
        _delay_ms(20);
        LCD_SendCommand_8bit(my_lcd , LCD_SET_8BIT_MODE);
        _delay_ms(5);
        LCD_SendCommand_8bit(my_lcd , LCD_SET_8BIT_MODE);
        _delay_us(150);
        LCD_SendCommand_8bit(my_lcd , LCD_SET_8BIT_MODE);
#if _LCD_CURSOR_STATUS == _LCD_CURSOR_OFF 
        LCD_SendCommand_8bit(my_lcd, LCD_DISPLAY_ON );
#elif  _LCD_CURSOR_STATUS == _LCD_CURSOR_ON    
        LCD_SendCommand_8bit(my_lcd, LCD_CURSOR_ON );
#elif  _LCD_CURSOR_STATUS == _LCD_CURSOR_ON_BLINKING_ON  
        LCD_SendCommand_8bit(my_lcd, LCD_CURSOR_BLINK );
#else 

#endif        
        LCD_SendCommand_8bit(my_lcd , LCD_CLEAR);
        LCD_SendCommand_8bit(my_lcd, LCD_ENTRY_MODE );
        _delay_ms(20);
        
        
       
       
    }    
    
#elif _LCD_MODE == _LCD_4BIT_MODE 
    if(NULL == my_lcd){
        
    }else{
        SetLcdPin(&my_lcd->rs_pin);
        SetLcdPin(&my_lcd->en_pin);
        for(int i = 0 ; i < 4 ; i++){
            SetLcdPin(&my_lcd->data_pins[i]);
        }
        _delay_ms(20);
        LCD_SendCommand_4bit(my_lcd , LCD_SET_4BIT_MODE);
        _delay_ms(5);
        LCD_SendCommand_4bit(my_lcd , LCD_SET_4BIT_MODE);
        _delay_us(5);
        LCD_SendCommand_4bit(my_lcd , LCD_SET_4BIT_MODE);
        LCD_SendCommand_4bit(my_lcd, LCD_DISPLAY_ON );
        LCD_SendCommand_4bit(my_lcd , LCD_CLEAR);
        LCD_SendCommand_4bit(my_lcd, LCD_ENTRY_MODE );
        LCD_SendCommand_4bit(my_lcd , LCD_SET_4BIT_MODE);
        _delay_ms(20);
        }
#endif     

}
void LCD_WriteChar(lcd_t *my_lcd , u8 ch){
    if(NULL == my_lcd){
        
    }else{
#if _LCD_MODE == _LCD_8BIT_MODE 
    
        LCD_SendPinData(&my_lcd->rs_pin , HIGH);
        LCD_SendPinData(&my_lcd->data_pins[0] , ((ch >> 0)&1));
        LCD_SendPinData(&my_lcd->data_pins[1] , ((ch >> 1)&1));
        LCD_SendPinData(&my_lcd->data_pins[2] , ((ch >> 2)&1));
        LCD_SendPinData(&my_lcd->data_pins[3] , ((ch >> 3)&1));
        LCD_SendPinData(&my_lcd->data_pins[4] , ((ch >> 4)&1));
        LCD_SendPinData(&my_lcd->data_pins[5] , ((ch >> 5)&1));
        LCD_SendPinData(&my_lcd->data_pins[6] , ((ch >> 6)&1));
        LCD_SendPinData(&my_lcd->data_pins[7] , ((ch >> 7)&1));
        LCD_SendEnableSignal(my_lcd);
#elif _LCD_MODE == _LCD_4BIT_MODE 
        LCD_SendPinData(&my_lcd->rs_pin , HIGH);
        LCD_SendPinData(&my_lcd->data_pins[0] , ((ch >> 4)&1));
        LCD_SendPinData(&my_lcd->data_pins[1] , ((ch >> 5)&1));
        LCD_SendPinData(&my_lcd->data_pins[2] , ((ch >> 6)&1));
        LCD_SendPinData(&my_lcd->data_pins[3] , ((ch >> 7)&1));
        LCD_SendEnableSignal(my_lcd);
        LCD_SendPinData(&my_lcd->data_pins[0] , ((ch >> 0)&1));
        LCD_SendPinData(&my_lcd->data_pins[1] , ((ch >> 1)&1));
        LCD_SendPinData(&my_lcd->data_pins[2] , ((ch >> 2)&1));
        LCD_SendPinData(&my_lcd->data_pins[3] , ((ch >> 3)&1));
        LCD_SendEnableSignal(my_lcd);  
#endif
    }
   
}
void LCD_WriteString( lcd_t *my_lcd , u8 *str){
    if(NULL == my_lcd){
        
    }else{
        
        while(*str){
            LCD_WriteChar(my_lcd , *str );
            str++;
        }
        
        
    }    
}

void LCD_Clear(lcd_t *my_lcd){
#if _LCD_MODE == _LCD_8BIT_MODE 
    if(NULL == my_lcd){
        
    }else{
        LCD_SendCommand_8bit(my_lcd , LCD_CLEAR);
        
    }    
    
#elif _LCD_MODE == _LCD_4BIT_MODE 
    if(NULL == my_lcd){
        
    }else{
        for(int i = 0 ; i < 4 ; i++){
            SetLcdPin(&my_lcd->data_pins[i]);
        }
        SetLcdPin(&my_lcd->rs_pin);
        SetLcdPin(&my_lcd->en_pin);
    }    
#endif  
}
void LCD_SetCursor(lcd_t *my_lcd , u8 row , u8 column){
    if(NULL == my_lcd){
        
    }else{
        #if _LCD_MODE == _LCD_8BIT_MODE 
#if _LCD_SIZE == _LCD_4ROW_20COLUMN 
        
        switch(row){
            case ROW1 : LCD_SendCommand_8bit(my_lcd , (0x80 + column));    break ;
            case ROW2 : LCD_SendCommand_8bit(my_lcd , (0xC0 + column));    break ;
            case ROW3 : LCD_SendCommand_8bit(my_lcd , (0x94 + column));    break ;
            case ROW4 : LCD_SendCommand_8bit(my_lcd , (0xD4 + column));    break ;
            default : break ; 
        }
#elif _LCD_SIZE == _LCD_2ROW_16COLUMN 
        switch(row){
            case ROW1 : LCD_SendCommand_8bit(my_lcd , (0x80 + column));    break ;
            case ROW2 : LCD_SendCommand_8bit(my_lcd , (0xC0 + column));    break ;
            default : break ; 
        }
#endif    
    
#elif _LCD_MODE == _LCD_4BIT_MODE 
    if(NULL == my_lcd){
        
    }else{
        for(int i = 0 ; i < 4 ; i++){
            SetLcdPin(&my_lcd->data_pins[i]);
        }
        SetLcdPin(&my_lcd->rs_pin);
        SetLcdPin(&my_lcd->en_pin);
    }    
#endif  
        _delay_ms(5);
    }

}

void LCD_WriteCustomChar(lcd_t *my_lcd , u8 _char[] , u8 mem_pos , u8 row , u8 column){
    
    u8 lcd_counter = 0 ;
    if(NULL == my_lcd)
    {
        
    }else{
        LCD_SendCommand_8bit( my_lcd , (LCD_SET_CGRAM_ADDR + (mem_pos*8)));
        for(lcd_counter= 0 ; lcd_counter <=7 ;lcd_counter++){
            LCD_WriteChar(my_lcd ,_char[lcd_counter] );
        }
        LCD_SetCursor(my_lcd , row , column) ;
        LCD_WriteChar(my_lcd ,mem_pos );
    }
    

}



void LCD_CursorBlinking(lcd_t *my_lcd , u8 cursorstatus){
    if(NULL == my_lcd){
        
    }else{
        if(cursorstatus == LCD_CURSOR_BLINK_ON){
            LCD_SendCommand_8bit(my_lcd , LCD_CURSOR_BLINK);
        }else if(cursorstatus == LCD_CURSOR_BLINK_OFF){
            LCD_SendCommand_8bit(my_lcd , LCD_CURSOR_ON);
        }else{
            
        }
    }
    
}


void LCD_MoveCursorRight(lcd_t *my_lcd){
    
    LCD_SendCommand_8bit(my_lcd , LCD_MOVE_CURSOR_RIGHT);
    
    
}
void LCD_MoveCursorLeft(lcd_t *my_lcd){
    
    LCD_SendCommand_8bit(my_lcd , LCD_MOVE_CURSOR_LEFT);
    
    
}



/*   Helper Functions   */


static void SetLcdPin(lcd_pin_t *my_pin){
    if(NULL == my_pin){
        
    }else{
        switch(my_pin->port){
            case PORT_A :
                SET_BIT(DDRA_REG , my_pin->pin) ;
                CLR_BIT(PORTA_REG , my_pin->pin );
                break ; 
            case PORT_B :
                SET_BIT(DDRB_REG , my_pin->pin) ;
                CLR_BIT(PORTB_REG , my_pin->pin );
                break ; 
            case PORT_C :
                SET_BIT(DDRC_REG , my_pin->pin) ;
                CLR_BIT(PORTC_REG , my_pin->pin );
                break ; 
            case PORT_D :
                SET_BIT(DDRD_REG , my_pin->pin) ;
                CLR_BIT(PORTD_REG , my_pin->pin );
                break ;     
            default :
                break  ;
        }
        
    }
    
    
}
static void LCD_SendPinData(lcd_pin_t *my_pin , u8 logic){
    if(NULL == my_pin){
        
    }else{
        if(logic == HIGH){
           switch(my_pin->port){
            case PORT_A :
                SET_BIT(PORTA_REG , my_pin->pin) ;
                break ; 
            case PORT_B :
                SET_BIT(PORTB_REG , my_pin->pin) ;
                break ; 
            case PORT_C :
                SET_BIT(PORTC_REG , my_pin->pin) ;
                break ; 
            case PORT_D :
                SET_BIT(PORTD_REG , my_pin->pin) ;
                break ;     
            default :
                break  ;
        }
        }else if(logic == LOW){
            switch(my_pin->port){
            case PORT_A :
                CLR_BIT(PORTA_REG , my_pin->pin) ;
                break ; 
            case PORT_B :
                CLR_BIT(PORTB_REG , my_pin->pin) ;
                break ; 
            case PORT_C :
                CLR_BIT(PORTC_REG , my_pin->pin) ;
                break ; 
            case PORT_D :
                CLR_BIT(PORTD_REG , my_pin->pin) ;
                break ;     
            default :
                break  ;
        }
        }else{
            
        }
        
        
        
    }
}

#if _LCD_MODE == _LCD_8BIT_MODE
static void LCD_SendCommand_8bit(lcd_t *my_lcd1 , u8 command){
    if(NULL == my_lcd1){
        
    }else{
        LCD_SendPinData(&my_lcd1->rs_pin , LOW);
        LCD_SendPinData(&(my_lcd1->data_pins[0]) , ((command >> 0)&1));
        LCD_SendPinData(&(my_lcd1->data_pins[1]) , ((command >> 1)&1));
        LCD_SendPinData(&(my_lcd1->data_pins[2]) , ((command >> 2)&1));
        LCD_SendPinData(&(my_lcd1->data_pins[3]) , ((command >> 3)&1));
        LCD_SendPinData(&(my_lcd1->data_pins[4]) , ((command >> 4)&1));
        LCD_SendPinData(&(my_lcd1->data_pins[5]) , ((command >> 5)&1));
        LCD_SendPinData(&(my_lcd1->data_pins[6]) , ((command >> 6)&1));
        LCD_SendPinData(&(my_lcd1->data_pins[7]) , ((command >> 7)&1));
        LCD_SendEnableSignal(my_lcd1);
        _delay_ms(5);
    }
    
}
#elif _LCD_MODE == _LCD_4BIT_MODE
static void LCD_SendCommand_4bit(lcd_t *my_lcd1 , u8 command){
    if(NULL == my_lcd1){
        
    }else{
        LCD_SendPinData(&my_lcd1->rs_pin , LOW);
        LCD_SendPinData(&(my_lcd1->data_pins[0]) , ((command >> 4)&1));
        LCD_SendPinData(&(my_lcd1->data_pins[1]) , ((command >> 5)&1));
        LCD_SendPinData(&(my_lcd1->data_pins[2]) , ((command >> 6)&1));
        LCD_SendPinData(&(my_lcd1->data_pins[3]) , ((command >> 7)&1));  
        LCD_SendEnableSignal(my_lcd1);
        LCD_SendPinData(&(my_lcd1->data_pins[0]) , ((command >> 0)&1));
        LCD_SendPinData(&(my_lcd1->data_pins[1]) , ((command >> 1)&1));
        LCD_SendPinData(&(my_lcd1->data_pins[2]) , ((command >> 2)&1));
        LCD_SendPinData(&(my_lcd1->data_pins[3]) , ((command >> 3)&1));
        LCD_SendEnableSignal(my_lcd1);
    }
    
}
#endif 
static void LCD_SendEnableSignal(lcd_t *my_lcd1){
    if(NULL == my_lcd1){
        
    }else{
        
        LCD_SendPinData(&(my_lcd1->en_pin), HIGH);
       _delay_ms(2);
        LCD_SendPinData(&(my_lcd1->en_pin), LOW);   
    }
}

