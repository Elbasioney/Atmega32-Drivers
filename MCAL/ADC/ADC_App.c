#define F_CPU 8000000UL 
#include "ADC_Config.h"
#include "ADC_Interface.h"
#include "ADC_Private.h"
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"
#include <util/delay.h>

static void ADC_StartConversion(void);
static void (*ADC_InterruptHandler)(void) = NULL ;
static u16 *ADC_Reading =  NULL ; 
static u8 ADC_BusyState = IDLE ; 

void ADC_Init(void){
    ADCSRA_REG->ADPS = ADC_SET_PRESCALER ;  // Set prescaler to the chosen value in the configuration file 
    SFIOR_REG->ADTS = ADC_Auto_Trigger_Source ;  // set auto triggering for adc conversion 
    ADMUX_REG->REFS = ADC_SET_VOLTAGE_REF ; // // Set voltage reference to the source value in the configuration file
#if ADC_SET_JUSTIFICATION == ADC_CONVERSION_RIGHT_JUSTIFIED 
    ADMUX_REG->ADLAR = ADC_CONVERSION_RIGHT_JUSTIFIED ;  // Set ADCH and ADCL to be right justified
#elif   ADC_SET_JUSTIFICATION == ADC_CONVERSION_LEFT_JUSTIFIED   
    ADMUX_REG->ADLAR = ADC_CONVERSION_LEFT_JUSTIFIED ;  // Set ADCH and ADCL to be left justified
#else 
    ADMUX_REG->ADLAR = ADC_CONVERSION_RIGHT_JUSTIFIED ;  // Set ADCH and ADCL to be right justified
#endif    
    ADCSRA_REG->ADEN = ENABLED ;  // Enable ADC peripheral 
}
void ADC_DeInit(void){
    ADCSRA_REG->ADEN = DISABLED ;  // Disable ADC peripheral 
}

void ADC_InterruptEnable(void){
   ADCSRA_REG->ADIE = ENABLED ;     // Enable the ADC interrupt
    
    
}
void ADC_InterruptDisable(void){
    ADCSRA_REG->ADIE = DISABLED ;  // Disable the ADC interrupt
    
    
}

u16 ADC_ReadConversion(u8 channel){ 
    u32 time_count = 0 ;
    ADMUX_REG->MUX = channel ;   // Selecting the ADC channel 
    ADC_StartConversion();
    while(((ADCSRA_REG->ADIF) == 0 )&&(time_count < 10000)){
        time_count++;
    } // Polling until the conversion complete flag is set  
    ADCSRA_REG->ADIF = 1  ; // Clearing the conversion complete flag
#if ADC_SET_JUSTIFICATION == ADC_CONVERSION_RIGHT_JUSTIFIED 
    u16 adc_res = (u16)(ADCL_REG |(ADCH_REG << 8)) ;
#elif ADC_SET_JUSTIFICATION == ADC_CONVERSION_LEFT_JUSTIFIED 
    u16 adc_res = (u16)( (ADCL_REG >> 6 ) |(ADCH_REG << 2 ) ) ;
#else 
    u16 adc_res = (u16)(ADCL_REG |(ADCH_REG << 8)) ;
#endif     
    return  adc_res ; 
}

void ADC_ReadConversionAsynchronous(u8 channel , u16 *copy_ADC_Reading ,void (*copy_ADC_InterruptHandler)(void)){
    if(ADC_BusyState == BUSY){
        
    }else if(ADC_BusyState == IDLE){
        if( (NULL == copy_ADC_InterruptHandler) || (copy_ADC_Reading == NULL) ){
        
        }else{
            ADC_BusyState = BUSY ;
            ADC_InterruptHandler = copy_ADC_InterruptHandler ;  
            ADC_Reading = copy_ADC_Reading ; 
            ADMUX_REG->MUX = channel ;   // Selecting the ADC channel 
            ADC_StartConversion();
            ADC_InterruptEnable();
            _delay_us(1);
        }  
    }else{
        
    }
    
}

/*           Helper Functions      */

static void ADC_StartConversion(void){
    
    ADCSRA_REG->ADSC = ENABLED ;  // Start ADC converting _
    
}

void __vector_16(void) __attribute__((signal));
void __vector_16(void){
    *ADC_Reading = (u16)(ADCL_REG |(ADCH_REG << 8)) ; // get reading 
    ADC_BusyState = IDLE  ;
    ADC_InterruptHandler();  //  callback function 
    ADC_InterruptDisable();
    
}