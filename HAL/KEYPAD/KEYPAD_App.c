
#include "KEYPAD_Config.h"
#include "KEYPAD_Interface.h"
#include "KEYPAD_Private.h"
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#include "../../MCAL/DIO/DIO_Interface.h"
#include "../../MCAL/DIO/DIO_Private.h"


const char characters[4][4] = { {'7', '8', '9', '/'},
                                {'4', '5', '6', '*'},
                                {'1', '2', '3', '-'},
                                {'#', '0', '=', '+'}};

static inline void KEYPAD_RowInit(keypad_pin_t *row_pin);
static inline void KEYPAD_ColumnInit(keypad_pin_t *column_pin);
static inline u8 KEYPAD_ReadColumnStatus(keypad_pin_t *my_pin);
static inline void KEYPAD_WriteRowOn(keypad_pin_t *my_pin);
static inline void KEYPAD_WriteRowOff(keypad_pin_t *my_pin);

void KEYPAD_Init(keypad_t *my_keypad){
    if(NULL == my_keypad){
        
        
    }else{
        for(int i = 0 ; i < 4 ; i++){
            KEYPAD_RowInit(&my_keypad->rows[i]);
        }
        for(int i = 0 ; i < 4 ; i++){
            KEYPAD_ColumnInit(&my_keypad->columns[i]);
        }
    }  
}


void KEYPAD_ReadChar(keypad_t *my_keypad , u8 *ch){
    u8 ret = LOW ;
    int i , j , x ; 
    if(NULL == my_keypad || ch == NULL ){
        
    }else{
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++) {
                KEYPAD_WriteRowOff(&(my_keypad->rows[j]));
            }
            KEYPAD_WriteRowOn(&(my_keypad->rows[i]));
            for (x = 0; x < 4; x++) {
                ret = KEYPAD_ReadColumnStatus(&(my_keypad->columns[x]));
                if ((HIGH == ret)) {
                    
                    KEYPAD_WriteRowOff(&(my_keypad->rows[i]));
                    *ch = characters[i][x];
                    break ; 
                }else{
                    
                }
            }
        }
        
    }  
}





/*   Helper Functions   */

static inline void KEYPAD_RowInit(keypad_pin_t *row_pin){
    if(NULL == row_pin){
        
        
    }else{
        switch(row_pin->port) {
            case PORT_A :
                SET_BIT(DDRA_REG,row_pin->pin);
                CLR_BIT(PORTA_REG,row_pin->pin);
                break ;
            case PORT_B :
                SET_BIT(DDRB_REG,row_pin->pin);
                CLR_BIT(PORTB_REG,row_pin->pin);
                break ;
            case PORT_C :
                SET_BIT(DDRC_REG,row_pin->pin);
                CLR_BIT(PORTC_REG,row_pin->pin);
                break ;
            case PORT_D :
                SET_BIT(DDRD_REG,row_pin->pin);
                CLR_BIT(PORTD_REG,row_pin->pin);
                break ;
            default :
                break ; 
        }
    }  
}
static inline void KEYPAD_ColumnInit(keypad_pin_t *column_pin){
    if(NULL == column_pin){
        
    }else{
        switch(column_pin->port) {
            case PORT_A :
                CLR_BIT(DDRA_REG,column_pin->pin);
                
                break ;
            case PORT_B :
                CLR_BIT(DDRB_REG,column_pin->pin);
                
                break ;
            case PORT_C :
                CLR_BIT(DDRC_REG,column_pin->pin);
                
                break ;
            case PORT_D :
                CLR_BIT(DDRD_REG,column_pin->pin);
                
                break ;
            default :
                break ; 
        }
    }  
}

static inline u8 KEYPAD_ReadColumnStatus(keypad_pin_t *my_pin){
    u8 ret = 0 ; 
    if(NULL == my_pin){
        
    }else{
        switch(my_pin->port){
            case PORT_A : 
                ret = GET_BIT(PINA_REG,my_pin->pin);
                break ;
            case PORT_B : 
                ret = GET_BIT(PINB_REG,my_pin->pin);
                break ;
            case PORT_C : 
                ret = GET_BIT(PINC_REG,my_pin->pin);
                break ;
            case PORT_D : 
                ret = GET_BIT(PIND_REG,my_pin->pin);
                break ;    
            default : 
                break ; 
        }
    }
    return ret ; 
}

static inline void KEYPAD_WriteRowOn(keypad_pin_t *my_pin){
    if(NULL == my_pin){
        
    }else{
        switch(my_pin->port){
            case PORT_A : 
                SET_BIT(PORTA_REG,my_pin->pin);
                break ;
            case PORT_B : 
                SET_BIT(PORTB_REG,my_pin->pin);
                break ;
            case PORT_C : 
                SET_BIT(PORTC_REG,my_pin->pin);
                break ;
            case PORT_D : 
                SET_BIT(PORTD_REG,my_pin->pin);
                break ;    
            default : 
                break ; 
        }
    }
}
static inline void KEYPAD_WriteRowOff(keypad_pin_t *my_pin){
    if(NULL == my_pin){
        
    }else{
        switch(my_pin->port){
            case PORT_A : 
                CLR_BIT(PORTA_REG,my_pin->pin);
                break ;
            case PORT_B : 
                CLR_BIT(PORTB_REG,my_pin->pin);
                break ;
            case PORT_C : 
                CLR_BIT(PORTC_REG,my_pin->pin);
                break ;
            case PORT_D : 
                CLR_BIT(PORTD_REG,my_pin->pin);
                break ;    
            default : 
                break ; 
        }
    }
}