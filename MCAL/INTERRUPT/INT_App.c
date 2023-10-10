#include "INT_Config.h"
#include "INT_Private.h"
#include "INT_Interface.h"
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"

static void (*INT0_Interrupt_Handler)(void) = NULL ;
static void (*INT1_Interrupt_Handler)(void) = NULL ;
static void (*INT2_Interrupt_Handler)(void) = NULL ;

void __vector_1(void) __attribute__((signal));
void __vector_2(void) __attribute__((signal));
void __vector_3(void) __attribute__((signal));



#if (INT0_STATUS == INT_ENABLE)
void INT0_Init(void (*Copy_INT0_Interrupt_Handler)(void)){
#if INT0_MODE == INT_ON_RAISING_EDGE
    /* Set sense control for INT0 to raising edge */
    SET_BIT(MCUCR_REG , MCUCR_INT00);
    SET_BIT(MCUCR_REG , MCUCR_INT01);
    /* Peripheral interrupt enable for INT0 */
    SET_BIT(GICR_REG , GICR_INT0);  
#elif INT0_MODE == INT_ON_FALLING_EDGE
    /* Set sense control for INT0 to falling edge */
    CLR_BIT(MCUCR_REG , MCUCR_INT00);
    SET_BIT(MCUCR_REG , MCUCR_INT01);
    /* Peripheral interrupt enable for INT0 */
    SET_BIT(GICR_REG , GICR_INT0);  
#elif INT0_MODE == INT_ON_CHANGE
    /* Set sense control for INT0 to interrupt on change*/
    SET_BIT(MCUCR_REG , MCUCR_INT00);
    CLR_BIT(MCUCR_REG , MCUCR_INT01);
    /* Peripheral interrupt enable for INT0 */
    SET_BIT(GICR_REG , GICR_INT0);  
#elif INT0_MODE == INT_ON_LOW_LEVEL
    /* Set sense control for INT0 to interrupt on low level */
    CLR_BIT(MCUCR_REG , MCUCR_INT00);
    CLR_BIT(MCUCR_REG , MCUCR_INT01);
    /* Peripheral interrupt enable for INT0 */
    SET_BIT(GICR_REG , GICR_INT0);  
#else

#endif    
    INT0_Interrupt_Handler = Copy_INT0_Interrupt_Handler  ;
}
#endif




#if (INT1_STATUS == INT_ENABLE)
void INT1_Init(void (*Copy_INT1_Interrupt_Handler)(void)){
#if INT1_MODE == INT_ON_RAISING_EDGE
    /* Set sense control for INT1 to raising edge */
    SET_BIT(MCUCR_REG , MCUCR_INT10);
    SET_BIT(MCUCR_REG , MCUCR_INT11);
    /* Peripheral interrupt enable for INT1 */
    SET_BIT(GICR_REG , GICR_INT1);
#elif INT1_MODE == INT_ON_FALLING_EDGE
    /* Set sense control for INT1 to falling edge */
    CLR_BIT(MCUCR_REG , MCUCR_INT10);
    SET_BIT(MCUCR_REG , MCUCR_INT11);
    /* Peripheral interrupt enable for INT1 */
    SET_BIT(GICR_REG , GICR_INT1);
#elif INT1_MODE == INT_ON_CHANGE
    /* Set sense control for INT1 to interrupt on change  */
    SET_BIT(MCUCR_REG , MCUCR_INT10);
    CLR_BIT(MCUCR_REG , MCUCR_INT11);
    /* Peripheral interrupt enable for INT1 */
    SET_BIT(GICR_REG , GICR_INT1);

#elif INT1_MODE == INT_ON_LOW_LEVEL
    /* Set sense control for INT1 to interrupt on low level */
    CLR_BIT(MCUCR_REG , MCUCR_INT10);
    CLR_BIT(MCUCR_REG , MCUCR_INT11);
    /* Peripheral interrupt enable for INT1 */
    SET_BIT(GICR_REG , GICR_INT1);

#else

#endif    
    INT1_Interrupt_Handler = Copy_INT1_Interrupt_Handler  ;
}
#endif




#if (INT2_STATUS == INT_ENABLE)
void INT2_Init(void (*Copy_INT2_Interrupt_Handler)(void)){
#if INT2_MODE == INT_ON_RAISING_EDGE
    /* Set sense control for INT2 to raising edge */
    SET_BIT(MCUCSR_REG , MCUCSR_INT2);
    /* Peripheral interrupt enable for INT2 */
    SET_BIT(GICR_REG  , GICR_INT2);
#elif INT2_MODE == INT_ON_FALLING_EDGE
    /* Set sense control for INT2 to falling edge */
    CLR_BIT(MCUCSR_REG,MCUCSR_INT2);
    /* Peripheral interrupt enable for INT2 */
    SET_BIT(GICR_REG , GICR_INT2);
#else

#endif    
    INT2_Interrupt_Handler = Copy_INT2_Interrupt_Handler  ;
}
#endif



void __vector_1(void){
    
    INT0_Interrupt_Handler();
}
void __vector_2(void){
    
    INT1_Interrupt_Handler();
}
void __vector_3(void){
    
    INT2_Interrupt_Handler();
}
