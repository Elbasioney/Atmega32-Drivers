#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-default.mk)" "nbproject/Makefile-local-default.mk"
include nbproject/Makefile-local-default.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=default
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/AVR_testng.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/AVR_testng.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

ifeq ($(COMPARE_BUILD), true)
COMPARISON_BUILD=-mafrlcsj
else
COMPARISON_BUILD=
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=HAL/7_Segments/7Seg_App.c HAL/KEYPAD/KEYPAD_App.c HAL/LCD/LCD_App.c HAL/LED/LED_App.c HAL/LM35/LM35_App.c HAL/MOTOR/MOTOR_App.c LIB/Helper_Functions.c MCAL/ADC/ADC_App.c MCAL/DIO/DIO_App.c MCAL/GIE/GIE_App.c MCAL/INTERRUPT/INT_App.c MCAL/PORT/PORT_App.c MCAL/SLEEP/SLEEP_App.c MCAL/SPI/SPI_App.c MCAL/TIMER0/TMR0_App.c MCAL/TIMER1/TMR1_App.c MCAL/TWI/TWI_App.c MCAL/UART/UART_App.c MCAL/WDT/WDT_App.c main.c OS/OS_App.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/HAL/7_Segments/7Seg_App.o ${OBJECTDIR}/HAL/KEYPAD/KEYPAD_App.o ${OBJECTDIR}/HAL/LCD/LCD_App.o ${OBJECTDIR}/HAL/LED/LED_App.o ${OBJECTDIR}/HAL/LM35/LM35_App.o ${OBJECTDIR}/HAL/MOTOR/MOTOR_App.o ${OBJECTDIR}/LIB/Helper_Functions.o ${OBJECTDIR}/MCAL/ADC/ADC_App.o ${OBJECTDIR}/MCAL/DIO/DIO_App.o ${OBJECTDIR}/MCAL/GIE/GIE_App.o ${OBJECTDIR}/MCAL/INTERRUPT/INT_App.o ${OBJECTDIR}/MCAL/PORT/PORT_App.o ${OBJECTDIR}/MCAL/SLEEP/SLEEP_App.o ${OBJECTDIR}/MCAL/SPI/SPI_App.o ${OBJECTDIR}/MCAL/TIMER0/TMR0_App.o ${OBJECTDIR}/MCAL/TIMER1/TMR1_App.o ${OBJECTDIR}/MCAL/TWI/TWI_App.o ${OBJECTDIR}/MCAL/UART/UART_App.o ${OBJECTDIR}/MCAL/WDT/WDT_App.o ${OBJECTDIR}/main.o ${OBJECTDIR}/OS/OS_App.o
POSSIBLE_DEPFILES=${OBJECTDIR}/HAL/7_Segments/7Seg_App.o.d ${OBJECTDIR}/HAL/KEYPAD/KEYPAD_App.o.d ${OBJECTDIR}/HAL/LCD/LCD_App.o.d ${OBJECTDIR}/HAL/LED/LED_App.o.d ${OBJECTDIR}/HAL/LM35/LM35_App.o.d ${OBJECTDIR}/HAL/MOTOR/MOTOR_App.o.d ${OBJECTDIR}/LIB/Helper_Functions.o.d ${OBJECTDIR}/MCAL/ADC/ADC_App.o.d ${OBJECTDIR}/MCAL/DIO/DIO_App.o.d ${OBJECTDIR}/MCAL/GIE/GIE_App.o.d ${OBJECTDIR}/MCAL/INTERRUPT/INT_App.o.d ${OBJECTDIR}/MCAL/PORT/PORT_App.o.d ${OBJECTDIR}/MCAL/SLEEP/SLEEP_App.o.d ${OBJECTDIR}/MCAL/SPI/SPI_App.o.d ${OBJECTDIR}/MCAL/TIMER0/TMR0_App.o.d ${OBJECTDIR}/MCAL/TIMER1/TMR1_App.o.d ${OBJECTDIR}/MCAL/TWI/TWI_App.o.d ${OBJECTDIR}/MCAL/UART/UART_App.o.d ${OBJECTDIR}/MCAL/WDT/WDT_App.o.d ${OBJECTDIR}/main.o.d ${OBJECTDIR}/OS/OS_App.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/HAL/7_Segments/7Seg_App.o ${OBJECTDIR}/HAL/KEYPAD/KEYPAD_App.o ${OBJECTDIR}/HAL/LCD/LCD_App.o ${OBJECTDIR}/HAL/LED/LED_App.o ${OBJECTDIR}/HAL/LM35/LM35_App.o ${OBJECTDIR}/HAL/MOTOR/MOTOR_App.o ${OBJECTDIR}/LIB/Helper_Functions.o ${OBJECTDIR}/MCAL/ADC/ADC_App.o ${OBJECTDIR}/MCAL/DIO/DIO_App.o ${OBJECTDIR}/MCAL/GIE/GIE_App.o ${OBJECTDIR}/MCAL/INTERRUPT/INT_App.o ${OBJECTDIR}/MCAL/PORT/PORT_App.o ${OBJECTDIR}/MCAL/SLEEP/SLEEP_App.o ${OBJECTDIR}/MCAL/SPI/SPI_App.o ${OBJECTDIR}/MCAL/TIMER0/TMR0_App.o ${OBJECTDIR}/MCAL/TIMER1/TMR1_App.o ${OBJECTDIR}/MCAL/TWI/TWI_App.o ${OBJECTDIR}/MCAL/UART/UART_App.o ${OBJECTDIR}/MCAL/WDT/WDT_App.o ${OBJECTDIR}/main.o ${OBJECTDIR}/OS/OS_App.o

# Source Files
SOURCEFILES=HAL/7_Segments/7Seg_App.c HAL/KEYPAD/KEYPAD_App.c HAL/LCD/LCD_App.c HAL/LED/LED_App.c HAL/LM35/LM35_App.c HAL/MOTOR/MOTOR_App.c LIB/Helper_Functions.c MCAL/ADC/ADC_App.c MCAL/DIO/DIO_App.c MCAL/GIE/GIE_App.c MCAL/INTERRUPT/INT_App.c MCAL/PORT/PORT_App.c MCAL/SLEEP/SLEEP_App.c MCAL/SPI/SPI_App.c MCAL/TIMER0/TMR0_App.c MCAL/TIMER1/TMR1_App.c MCAL/TWI/TWI_App.c MCAL/UART/UART_App.c MCAL/WDT/WDT_App.c main.c OS/OS_App.c



CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
ifneq ($(INFORMATION_MESSAGE), )
	@echo $(INFORMATION_MESSAGE)
endif
	${MAKE}  -f nbproject/Makefile-default.mk ${DISTDIR}/AVR_testng.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=ATmega32
# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/HAL/7_Segments/7Seg_App.o: HAL/7_Segments/7Seg_App.c  .generated_files/flags/default/fc031ee8ee2df480cd15145587be77fa20bd388a .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/HAL/7_Segments" 
	@${RM} ${OBJECTDIR}/HAL/7_Segments/7Seg_App.o.d 
	@${RM} ${OBJECTDIR}/HAL/7_Segments/7Seg_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/HAL/7_Segments/7Seg_App.o.d" -MT "${OBJECTDIR}/HAL/7_Segments/7Seg_App.o.d" -MT ${OBJECTDIR}/HAL/7_Segments/7Seg_App.o -o ${OBJECTDIR}/HAL/7_Segments/7Seg_App.o HAL/7_Segments/7Seg_App.c 
	
${OBJECTDIR}/HAL/KEYPAD/KEYPAD_App.o: HAL/KEYPAD/KEYPAD_App.c  .generated_files/flags/default/520b486956d0c0f27b9d0cfbe2caf80a0973aa10 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/HAL/KEYPAD" 
	@${RM} ${OBJECTDIR}/HAL/KEYPAD/KEYPAD_App.o.d 
	@${RM} ${OBJECTDIR}/HAL/KEYPAD/KEYPAD_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/HAL/KEYPAD/KEYPAD_App.o.d" -MT "${OBJECTDIR}/HAL/KEYPAD/KEYPAD_App.o.d" -MT ${OBJECTDIR}/HAL/KEYPAD/KEYPAD_App.o -o ${OBJECTDIR}/HAL/KEYPAD/KEYPAD_App.o HAL/KEYPAD/KEYPAD_App.c 
	
${OBJECTDIR}/HAL/LCD/LCD_App.o: HAL/LCD/LCD_App.c  .generated_files/flags/default/8ae25edd47927f13b1fbc4070ac7c21fc4a81503 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/HAL/LCD" 
	@${RM} ${OBJECTDIR}/HAL/LCD/LCD_App.o.d 
	@${RM} ${OBJECTDIR}/HAL/LCD/LCD_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/HAL/LCD/LCD_App.o.d" -MT "${OBJECTDIR}/HAL/LCD/LCD_App.o.d" -MT ${OBJECTDIR}/HAL/LCD/LCD_App.o -o ${OBJECTDIR}/HAL/LCD/LCD_App.o HAL/LCD/LCD_App.c 
	
${OBJECTDIR}/HAL/LED/LED_App.o: HAL/LED/LED_App.c  .generated_files/flags/default/609d24b3183c0825d4c777fef0e41ece7fed0456 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/HAL/LED" 
	@${RM} ${OBJECTDIR}/HAL/LED/LED_App.o.d 
	@${RM} ${OBJECTDIR}/HAL/LED/LED_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/HAL/LED/LED_App.o.d" -MT "${OBJECTDIR}/HAL/LED/LED_App.o.d" -MT ${OBJECTDIR}/HAL/LED/LED_App.o -o ${OBJECTDIR}/HAL/LED/LED_App.o HAL/LED/LED_App.c 
	
${OBJECTDIR}/HAL/LM35/LM35_App.o: HAL/LM35/LM35_App.c  .generated_files/flags/default/536d24e590de4f054161f708fe279a50ff837c17 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/HAL/LM35" 
	@${RM} ${OBJECTDIR}/HAL/LM35/LM35_App.o.d 
	@${RM} ${OBJECTDIR}/HAL/LM35/LM35_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/HAL/LM35/LM35_App.o.d" -MT "${OBJECTDIR}/HAL/LM35/LM35_App.o.d" -MT ${OBJECTDIR}/HAL/LM35/LM35_App.o -o ${OBJECTDIR}/HAL/LM35/LM35_App.o HAL/LM35/LM35_App.c 
	
${OBJECTDIR}/HAL/MOTOR/MOTOR_App.o: HAL/MOTOR/MOTOR_App.c  .generated_files/flags/default/e140c5c7e02a11eb1b2ccee2322a86952d0d7e15 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/HAL/MOTOR" 
	@${RM} ${OBJECTDIR}/HAL/MOTOR/MOTOR_App.o.d 
	@${RM} ${OBJECTDIR}/HAL/MOTOR/MOTOR_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/HAL/MOTOR/MOTOR_App.o.d" -MT "${OBJECTDIR}/HAL/MOTOR/MOTOR_App.o.d" -MT ${OBJECTDIR}/HAL/MOTOR/MOTOR_App.o -o ${OBJECTDIR}/HAL/MOTOR/MOTOR_App.o HAL/MOTOR/MOTOR_App.c 
	
${OBJECTDIR}/LIB/Helper_Functions.o: LIB/Helper_Functions.c  .generated_files/flags/default/8f8d78b41b4cb6c52ce04b2f6958acf3970f3fe4 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/LIB" 
	@${RM} ${OBJECTDIR}/LIB/Helper_Functions.o.d 
	@${RM} ${OBJECTDIR}/LIB/Helper_Functions.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/LIB/Helper_Functions.o.d" -MT "${OBJECTDIR}/LIB/Helper_Functions.o.d" -MT ${OBJECTDIR}/LIB/Helper_Functions.o -o ${OBJECTDIR}/LIB/Helper_Functions.o LIB/Helper_Functions.c 
	
${OBJECTDIR}/MCAL/ADC/ADC_App.o: MCAL/ADC/ADC_App.c  .generated_files/flags/default/20ef32b9e6e3fcf1c2abf6627b7cf9746661f47c .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL/ADC" 
	@${RM} ${OBJECTDIR}/MCAL/ADC/ADC_App.o.d 
	@${RM} ${OBJECTDIR}/MCAL/ADC/ADC_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL/ADC/ADC_App.o.d" -MT "${OBJECTDIR}/MCAL/ADC/ADC_App.o.d" -MT ${OBJECTDIR}/MCAL/ADC/ADC_App.o -o ${OBJECTDIR}/MCAL/ADC/ADC_App.o MCAL/ADC/ADC_App.c 
	
${OBJECTDIR}/MCAL/DIO/DIO_App.o: MCAL/DIO/DIO_App.c  .generated_files/flags/default/62cf20c052c6a60c3717bacf5e46fac964aef43 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL/DIO" 
	@${RM} ${OBJECTDIR}/MCAL/DIO/DIO_App.o.d 
	@${RM} ${OBJECTDIR}/MCAL/DIO/DIO_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL/DIO/DIO_App.o.d" -MT "${OBJECTDIR}/MCAL/DIO/DIO_App.o.d" -MT ${OBJECTDIR}/MCAL/DIO/DIO_App.o -o ${OBJECTDIR}/MCAL/DIO/DIO_App.o MCAL/DIO/DIO_App.c 
	
${OBJECTDIR}/MCAL/GIE/GIE_App.o: MCAL/GIE/GIE_App.c  .generated_files/flags/default/fccdd51327d83beda876c26b9e25a0c3cdb439ef .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL/GIE" 
	@${RM} ${OBJECTDIR}/MCAL/GIE/GIE_App.o.d 
	@${RM} ${OBJECTDIR}/MCAL/GIE/GIE_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL/GIE/GIE_App.o.d" -MT "${OBJECTDIR}/MCAL/GIE/GIE_App.o.d" -MT ${OBJECTDIR}/MCAL/GIE/GIE_App.o -o ${OBJECTDIR}/MCAL/GIE/GIE_App.o MCAL/GIE/GIE_App.c 
	
${OBJECTDIR}/MCAL/INTERRUPT/INT_App.o: MCAL/INTERRUPT/INT_App.c  .generated_files/flags/default/3b25ba0a1975dc454cb15c6cf2c64020b989752a .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL/INTERRUPT" 
	@${RM} ${OBJECTDIR}/MCAL/INTERRUPT/INT_App.o.d 
	@${RM} ${OBJECTDIR}/MCAL/INTERRUPT/INT_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL/INTERRUPT/INT_App.o.d" -MT "${OBJECTDIR}/MCAL/INTERRUPT/INT_App.o.d" -MT ${OBJECTDIR}/MCAL/INTERRUPT/INT_App.o -o ${OBJECTDIR}/MCAL/INTERRUPT/INT_App.o MCAL/INTERRUPT/INT_App.c 
	
${OBJECTDIR}/MCAL/PORT/PORT_App.o: MCAL/PORT/PORT_App.c  .generated_files/flags/default/9b7d956a084244f5f16be964efbb44d1e5c351ec .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL/PORT" 
	@${RM} ${OBJECTDIR}/MCAL/PORT/PORT_App.o.d 
	@${RM} ${OBJECTDIR}/MCAL/PORT/PORT_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL/PORT/PORT_App.o.d" -MT "${OBJECTDIR}/MCAL/PORT/PORT_App.o.d" -MT ${OBJECTDIR}/MCAL/PORT/PORT_App.o -o ${OBJECTDIR}/MCAL/PORT/PORT_App.o MCAL/PORT/PORT_App.c 
	
${OBJECTDIR}/MCAL/SLEEP/SLEEP_App.o: MCAL/SLEEP/SLEEP_App.c  .generated_files/flags/default/8cc18b8bc953ea861474be256ff288e6c204e5cf .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL/SLEEP" 
	@${RM} ${OBJECTDIR}/MCAL/SLEEP/SLEEP_App.o.d 
	@${RM} ${OBJECTDIR}/MCAL/SLEEP/SLEEP_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL/SLEEP/SLEEP_App.o.d" -MT "${OBJECTDIR}/MCAL/SLEEP/SLEEP_App.o.d" -MT ${OBJECTDIR}/MCAL/SLEEP/SLEEP_App.o -o ${OBJECTDIR}/MCAL/SLEEP/SLEEP_App.o MCAL/SLEEP/SLEEP_App.c 
	
${OBJECTDIR}/MCAL/SPI/SPI_App.o: MCAL/SPI/SPI_App.c  .generated_files/flags/default/14fd4124f1d1349af881e09e6c4c1a75cb0bf3da .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL/SPI" 
	@${RM} ${OBJECTDIR}/MCAL/SPI/SPI_App.o.d 
	@${RM} ${OBJECTDIR}/MCAL/SPI/SPI_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL/SPI/SPI_App.o.d" -MT "${OBJECTDIR}/MCAL/SPI/SPI_App.o.d" -MT ${OBJECTDIR}/MCAL/SPI/SPI_App.o -o ${OBJECTDIR}/MCAL/SPI/SPI_App.o MCAL/SPI/SPI_App.c 
	
${OBJECTDIR}/MCAL/TIMER0/TMR0_App.o: MCAL/TIMER0/TMR0_App.c  .generated_files/flags/default/fc3459416d91c71d81e7e71f1abbf4dd9f45a065 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL/TIMER0" 
	@${RM} ${OBJECTDIR}/MCAL/TIMER0/TMR0_App.o.d 
	@${RM} ${OBJECTDIR}/MCAL/TIMER0/TMR0_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL/TIMER0/TMR0_App.o.d" -MT "${OBJECTDIR}/MCAL/TIMER0/TMR0_App.o.d" -MT ${OBJECTDIR}/MCAL/TIMER0/TMR0_App.o -o ${OBJECTDIR}/MCAL/TIMER0/TMR0_App.o MCAL/TIMER0/TMR0_App.c 
	
${OBJECTDIR}/MCAL/TIMER1/TMR1_App.o: MCAL/TIMER1/TMR1_App.c  .generated_files/flags/default/b4e4aff20d22430f03224a3f6ac2d0cfebfb5b9e .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL/TIMER1" 
	@${RM} ${OBJECTDIR}/MCAL/TIMER1/TMR1_App.o.d 
	@${RM} ${OBJECTDIR}/MCAL/TIMER1/TMR1_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL/TIMER1/TMR1_App.o.d" -MT "${OBJECTDIR}/MCAL/TIMER1/TMR1_App.o.d" -MT ${OBJECTDIR}/MCAL/TIMER1/TMR1_App.o -o ${OBJECTDIR}/MCAL/TIMER1/TMR1_App.o MCAL/TIMER1/TMR1_App.c 
	
${OBJECTDIR}/MCAL/TWI/TWI_App.o: MCAL/TWI/TWI_App.c  .generated_files/flags/default/74df0e2ec9aa2d167d882c349293f05df6ca30c2 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL/TWI" 
	@${RM} ${OBJECTDIR}/MCAL/TWI/TWI_App.o.d 
	@${RM} ${OBJECTDIR}/MCAL/TWI/TWI_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL/TWI/TWI_App.o.d" -MT "${OBJECTDIR}/MCAL/TWI/TWI_App.o.d" -MT ${OBJECTDIR}/MCAL/TWI/TWI_App.o -o ${OBJECTDIR}/MCAL/TWI/TWI_App.o MCAL/TWI/TWI_App.c 
	
${OBJECTDIR}/MCAL/UART/UART_App.o: MCAL/UART/UART_App.c  .generated_files/flags/default/1cc28aa9f8acb9c93023ceda827d3c118b43fed4 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL/UART" 
	@${RM} ${OBJECTDIR}/MCAL/UART/UART_App.o.d 
	@${RM} ${OBJECTDIR}/MCAL/UART/UART_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL/UART/UART_App.o.d" -MT "${OBJECTDIR}/MCAL/UART/UART_App.o.d" -MT ${OBJECTDIR}/MCAL/UART/UART_App.o -o ${OBJECTDIR}/MCAL/UART/UART_App.o MCAL/UART/UART_App.c 
	
${OBJECTDIR}/MCAL/WDT/WDT_App.o: MCAL/WDT/WDT_App.c  .generated_files/flags/default/a96776ee3808a341d4916b673ef0e15af4b2259b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL/WDT" 
	@${RM} ${OBJECTDIR}/MCAL/WDT/WDT_App.o.d 
	@${RM} ${OBJECTDIR}/MCAL/WDT/WDT_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL/WDT/WDT_App.o.d" -MT "${OBJECTDIR}/MCAL/WDT/WDT_App.o.d" -MT ${OBJECTDIR}/MCAL/WDT/WDT_App.o -o ${OBJECTDIR}/MCAL/WDT/WDT_App.o MCAL/WDT/WDT_App.c 
	
${OBJECTDIR}/main.o: main.c  .generated_files/flags/default/4b2ec6e3bec778d5e8ce2bcf82207875b150e142 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/main.o.d 
	@${RM} ${OBJECTDIR}/main.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/main.o.d" -MT "${OBJECTDIR}/main.o.d" -MT ${OBJECTDIR}/main.o -o ${OBJECTDIR}/main.o main.c 
	
${OBJECTDIR}/OS/OS_App.o: OS/OS_App.c  .generated_files/flags/default/e355b0e124a7a2e15def7bada8765544ffd9bcf4 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/OS" 
	@${RM} ${OBJECTDIR}/OS/OS_App.o.d 
	@${RM} ${OBJECTDIR}/OS/OS_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/OS/OS_App.o.d" -MT "${OBJECTDIR}/OS/OS_App.o.d" -MT ${OBJECTDIR}/OS/OS_App.o -o ${OBJECTDIR}/OS/OS_App.o OS/OS_App.c 
	
else
${OBJECTDIR}/HAL/7_Segments/7Seg_App.o: HAL/7_Segments/7Seg_App.c  .generated_files/flags/default/83db9759c990f940328900931195468675406037 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/HAL/7_Segments" 
	@${RM} ${OBJECTDIR}/HAL/7_Segments/7Seg_App.o.d 
	@${RM} ${OBJECTDIR}/HAL/7_Segments/7Seg_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/HAL/7_Segments/7Seg_App.o.d" -MT "${OBJECTDIR}/HAL/7_Segments/7Seg_App.o.d" -MT ${OBJECTDIR}/HAL/7_Segments/7Seg_App.o -o ${OBJECTDIR}/HAL/7_Segments/7Seg_App.o HAL/7_Segments/7Seg_App.c 
	
${OBJECTDIR}/HAL/KEYPAD/KEYPAD_App.o: HAL/KEYPAD/KEYPAD_App.c  .generated_files/flags/default/32920fef1bcbe52e57ba666b2217a365d9037b76 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/HAL/KEYPAD" 
	@${RM} ${OBJECTDIR}/HAL/KEYPAD/KEYPAD_App.o.d 
	@${RM} ${OBJECTDIR}/HAL/KEYPAD/KEYPAD_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/HAL/KEYPAD/KEYPAD_App.o.d" -MT "${OBJECTDIR}/HAL/KEYPAD/KEYPAD_App.o.d" -MT ${OBJECTDIR}/HAL/KEYPAD/KEYPAD_App.o -o ${OBJECTDIR}/HAL/KEYPAD/KEYPAD_App.o HAL/KEYPAD/KEYPAD_App.c 
	
${OBJECTDIR}/HAL/LCD/LCD_App.o: HAL/LCD/LCD_App.c  .generated_files/flags/default/fbfaff421bc04558d614bd4011171a3505911c1e .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/HAL/LCD" 
	@${RM} ${OBJECTDIR}/HAL/LCD/LCD_App.o.d 
	@${RM} ${OBJECTDIR}/HAL/LCD/LCD_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/HAL/LCD/LCD_App.o.d" -MT "${OBJECTDIR}/HAL/LCD/LCD_App.o.d" -MT ${OBJECTDIR}/HAL/LCD/LCD_App.o -o ${OBJECTDIR}/HAL/LCD/LCD_App.o HAL/LCD/LCD_App.c 
	
${OBJECTDIR}/HAL/LED/LED_App.o: HAL/LED/LED_App.c  .generated_files/flags/default/5e2cde5d9451fa97fe3455fcb6d021e01e267db8 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/HAL/LED" 
	@${RM} ${OBJECTDIR}/HAL/LED/LED_App.o.d 
	@${RM} ${OBJECTDIR}/HAL/LED/LED_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/HAL/LED/LED_App.o.d" -MT "${OBJECTDIR}/HAL/LED/LED_App.o.d" -MT ${OBJECTDIR}/HAL/LED/LED_App.o -o ${OBJECTDIR}/HAL/LED/LED_App.o HAL/LED/LED_App.c 
	
${OBJECTDIR}/HAL/LM35/LM35_App.o: HAL/LM35/LM35_App.c  .generated_files/flags/default/cc7197dfe9dd14300ac7a22446be5b810edfba39 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/HAL/LM35" 
	@${RM} ${OBJECTDIR}/HAL/LM35/LM35_App.o.d 
	@${RM} ${OBJECTDIR}/HAL/LM35/LM35_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/HAL/LM35/LM35_App.o.d" -MT "${OBJECTDIR}/HAL/LM35/LM35_App.o.d" -MT ${OBJECTDIR}/HAL/LM35/LM35_App.o -o ${OBJECTDIR}/HAL/LM35/LM35_App.o HAL/LM35/LM35_App.c 
	
${OBJECTDIR}/HAL/MOTOR/MOTOR_App.o: HAL/MOTOR/MOTOR_App.c  .generated_files/flags/default/cd848b535ddda22a475b5180e12bccc135d76f15 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/HAL/MOTOR" 
	@${RM} ${OBJECTDIR}/HAL/MOTOR/MOTOR_App.o.d 
	@${RM} ${OBJECTDIR}/HAL/MOTOR/MOTOR_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/HAL/MOTOR/MOTOR_App.o.d" -MT "${OBJECTDIR}/HAL/MOTOR/MOTOR_App.o.d" -MT ${OBJECTDIR}/HAL/MOTOR/MOTOR_App.o -o ${OBJECTDIR}/HAL/MOTOR/MOTOR_App.o HAL/MOTOR/MOTOR_App.c 
	
${OBJECTDIR}/LIB/Helper_Functions.o: LIB/Helper_Functions.c  .generated_files/flags/default/77b256e1d40138f2d622207967ef404e8c7f332a .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/LIB" 
	@${RM} ${OBJECTDIR}/LIB/Helper_Functions.o.d 
	@${RM} ${OBJECTDIR}/LIB/Helper_Functions.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/LIB/Helper_Functions.o.d" -MT "${OBJECTDIR}/LIB/Helper_Functions.o.d" -MT ${OBJECTDIR}/LIB/Helper_Functions.o -o ${OBJECTDIR}/LIB/Helper_Functions.o LIB/Helper_Functions.c 
	
${OBJECTDIR}/MCAL/ADC/ADC_App.o: MCAL/ADC/ADC_App.c  .generated_files/flags/default/9b692f5a2d5515aaed9ca8ea765a38dbb64fc01c .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL/ADC" 
	@${RM} ${OBJECTDIR}/MCAL/ADC/ADC_App.o.d 
	@${RM} ${OBJECTDIR}/MCAL/ADC/ADC_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL/ADC/ADC_App.o.d" -MT "${OBJECTDIR}/MCAL/ADC/ADC_App.o.d" -MT ${OBJECTDIR}/MCAL/ADC/ADC_App.o -o ${OBJECTDIR}/MCAL/ADC/ADC_App.o MCAL/ADC/ADC_App.c 
	
${OBJECTDIR}/MCAL/DIO/DIO_App.o: MCAL/DIO/DIO_App.c  .generated_files/flags/default/192c0e08273cdde64c02ec4f22ea1a4a3fc795c9 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL/DIO" 
	@${RM} ${OBJECTDIR}/MCAL/DIO/DIO_App.o.d 
	@${RM} ${OBJECTDIR}/MCAL/DIO/DIO_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL/DIO/DIO_App.o.d" -MT "${OBJECTDIR}/MCAL/DIO/DIO_App.o.d" -MT ${OBJECTDIR}/MCAL/DIO/DIO_App.o -o ${OBJECTDIR}/MCAL/DIO/DIO_App.o MCAL/DIO/DIO_App.c 
	
${OBJECTDIR}/MCAL/GIE/GIE_App.o: MCAL/GIE/GIE_App.c  .generated_files/flags/default/79072b74dfb13eb4056dbaff9c16530884ef6e73 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL/GIE" 
	@${RM} ${OBJECTDIR}/MCAL/GIE/GIE_App.o.d 
	@${RM} ${OBJECTDIR}/MCAL/GIE/GIE_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL/GIE/GIE_App.o.d" -MT "${OBJECTDIR}/MCAL/GIE/GIE_App.o.d" -MT ${OBJECTDIR}/MCAL/GIE/GIE_App.o -o ${OBJECTDIR}/MCAL/GIE/GIE_App.o MCAL/GIE/GIE_App.c 
	
${OBJECTDIR}/MCAL/INTERRUPT/INT_App.o: MCAL/INTERRUPT/INT_App.c  .generated_files/flags/default/fdec1a7a5a51976e9364ed25c90b5b198d983598 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL/INTERRUPT" 
	@${RM} ${OBJECTDIR}/MCAL/INTERRUPT/INT_App.o.d 
	@${RM} ${OBJECTDIR}/MCAL/INTERRUPT/INT_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL/INTERRUPT/INT_App.o.d" -MT "${OBJECTDIR}/MCAL/INTERRUPT/INT_App.o.d" -MT ${OBJECTDIR}/MCAL/INTERRUPT/INT_App.o -o ${OBJECTDIR}/MCAL/INTERRUPT/INT_App.o MCAL/INTERRUPT/INT_App.c 
	
${OBJECTDIR}/MCAL/PORT/PORT_App.o: MCAL/PORT/PORT_App.c  .generated_files/flags/default/ca8a3c634c3d529bfddf2191734afa0c8ee9ed05 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL/PORT" 
	@${RM} ${OBJECTDIR}/MCAL/PORT/PORT_App.o.d 
	@${RM} ${OBJECTDIR}/MCAL/PORT/PORT_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL/PORT/PORT_App.o.d" -MT "${OBJECTDIR}/MCAL/PORT/PORT_App.o.d" -MT ${OBJECTDIR}/MCAL/PORT/PORT_App.o -o ${OBJECTDIR}/MCAL/PORT/PORT_App.o MCAL/PORT/PORT_App.c 
	
${OBJECTDIR}/MCAL/SLEEP/SLEEP_App.o: MCAL/SLEEP/SLEEP_App.c  .generated_files/flags/default/d7bdf78d9380cb7513e96a5b41367bfa366c967e .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL/SLEEP" 
	@${RM} ${OBJECTDIR}/MCAL/SLEEP/SLEEP_App.o.d 
	@${RM} ${OBJECTDIR}/MCAL/SLEEP/SLEEP_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL/SLEEP/SLEEP_App.o.d" -MT "${OBJECTDIR}/MCAL/SLEEP/SLEEP_App.o.d" -MT ${OBJECTDIR}/MCAL/SLEEP/SLEEP_App.o -o ${OBJECTDIR}/MCAL/SLEEP/SLEEP_App.o MCAL/SLEEP/SLEEP_App.c 
	
${OBJECTDIR}/MCAL/SPI/SPI_App.o: MCAL/SPI/SPI_App.c  .generated_files/flags/default/50f65a1f2b9dcdced8c566224d387fb780bd4f28 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL/SPI" 
	@${RM} ${OBJECTDIR}/MCAL/SPI/SPI_App.o.d 
	@${RM} ${OBJECTDIR}/MCAL/SPI/SPI_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL/SPI/SPI_App.o.d" -MT "${OBJECTDIR}/MCAL/SPI/SPI_App.o.d" -MT ${OBJECTDIR}/MCAL/SPI/SPI_App.o -o ${OBJECTDIR}/MCAL/SPI/SPI_App.o MCAL/SPI/SPI_App.c 
	
${OBJECTDIR}/MCAL/TIMER0/TMR0_App.o: MCAL/TIMER0/TMR0_App.c  .generated_files/flags/default/a6c5e2972547cd2c47d461cc9e22370fb673df08 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL/TIMER0" 
	@${RM} ${OBJECTDIR}/MCAL/TIMER0/TMR0_App.o.d 
	@${RM} ${OBJECTDIR}/MCAL/TIMER0/TMR0_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL/TIMER0/TMR0_App.o.d" -MT "${OBJECTDIR}/MCAL/TIMER0/TMR0_App.o.d" -MT ${OBJECTDIR}/MCAL/TIMER0/TMR0_App.o -o ${OBJECTDIR}/MCAL/TIMER0/TMR0_App.o MCAL/TIMER0/TMR0_App.c 
	
${OBJECTDIR}/MCAL/TIMER1/TMR1_App.o: MCAL/TIMER1/TMR1_App.c  .generated_files/flags/default/1e8361d28a8d270bee199c678ba17892249955f6 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL/TIMER1" 
	@${RM} ${OBJECTDIR}/MCAL/TIMER1/TMR1_App.o.d 
	@${RM} ${OBJECTDIR}/MCAL/TIMER1/TMR1_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL/TIMER1/TMR1_App.o.d" -MT "${OBJECTDIR}/MCAL/TIMER1/TMR1_App.o.d" -MT ${OBJECTDIR}/MCAL/TIMER1/TMR1_App.o -o ${OBJECTDIR}/MCAL/TIMER1/TMR1_App.o MCAL/TIMER1/TMR1_App.c 
	
${OBJECTDIR}/MCAL/TWI/TWI_App.o: MCAL/TWI/TWI_App.c  .generated_files/flags/default/afc30d44a26222f8bf8ea5daeb2c902adf670d25 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL/TWI" 
	@${RM} ${OBJECTDIR}/MCAL/TWI/TWI_App.o.d 
	@${RM} ${OBJECTDIR}/MCAL/TWI/TWI_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL/TWI/TWI_App.o.d" -MT "${OBJECTDIR}/MCAL/TWI/TWI_App.o.d" -MT ${OBJECTDIR}/MCAL/TWI/TWI_App.o -o ${OBJECTDIR}/MCAL/TWI/TWI_App.o MCAL/TWI/TWI_App.c 
	
${OBJECTDIR}/MCAL/UART/UART_App.o: MCAL/UART/UART_App.c  .generated_files/flags/default/31b22bdd38223ec58534610ab64ab62543fa900a .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL/UART" 
	@${RM} ${OBJECTDIR}/MCAL/UART/UART_App.o.d 
	@${RM} ${OBJECTDIR}/MCAL/UART/UART_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL/UART/UART_App.o.d" -MT "${OBJECTDIR}/MCAL/UART/UART_App.o.d" -MT ${OBJECTDIR}/MCAL/UART/UART_App.o -o ${OBJECTDIR}/MCAL/UART/UART_App.o MCAL/UART/UART_App.c 
	
${OBJECTDIR}/MCAL/WDT/WDT_App.o: MCAL/WDT/WDT_App.c  .generated_files/flags/default/8181030c88c05ffbd2cbce9553e3e4d5f075a97d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL/WDT" 
	@${RM} ${OBJECTDIR}/MCAL/WDT/WDT_App.o.d 
	@${RM} ${OBJECTDIR}/MCAL/WDT/WDT_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL/WDT/WDT_App.o.d" -MT "${OBJECTDIR}/MCAL/WDT/WDT_App.o.d" -MT ${OBJECTDIR}/MCAL/WDT/WDT_App.o -o ${OBJECTDIR}/MCAL/WDT/WDT_App.o MCAL/WDT/WDT_App.c 
	
${OBJECTDIR}/main.o: main.c  .generated_files/flags/default/6a8395308e829d9a1a828b12c1d5c00edd2d31c .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/main.o.d 
	@${RM} ${OBJECTDIR}/main.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/main.o.d" -MT "${OBJECTDIR}/main.o.d" -MT ${OBJECTDIR}/main.o -o ${OBJECTDIR}/main.o main.c 
	
${OBJECTDIR}/OS/OS_App.o: OS/OS_App.c  .generated_files/flags/default/4758fcc971fcba5105a9f912fc57637905fe6dd4 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/OS" 
	@${RM} ${OBJECTDIR}/OS/OS_App.o.d 
	@${RM} ${OBJECTDIR}/OS/OS_App.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/OS/OS_App.o.d" -MT "${OBJECTDIR}/OS/OS_App.o.d" -MT ${OBJECTDIR}/OS/OS_App.o -o ${OBJECTDIR}/OS/OS_App.o OS/OS_App.c 
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assembleWithPreprocess
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${DISTDIR}/AVR_testng.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -Wl,-Map=${DISTDIR}/AVR_testng.${IMAGE_TYPE}.map  -D__DEBUG=1  -DXPRJ_default=$(CND_CONF)  -Wl,--defsym=__MPLAB_BUILD=1   -mdfp="${DFP_DIR}/xc8"   -gdwarf-2 -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     $(COMPARISON_BUILD) -Wl,--memorysummary,${DISTDIR}/memoryfile.xml -o ${DISTDIR}/AVR_testng.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  -o ${DISTDIR}/AVR_testng.${IMAGE_TYPE}.${OUTPUT_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}      -Wl,--start-group  -Wl,-lm -Wl,--end-group  -Wl,--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1
	@${RM} ${DISTDIR}/AVR_testng.${IMAGE_TYPE}.hex 
	
else
${DISTDIR}/AVR_testng.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -Wl,-Map=${DISTDIR}/AVR_testng.${IMAGE_TYPE}.map  -DXPRJ_default=$(CND_CONF)  -Wl,--defsym=__MPLAB_BUILD=1   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     $(COMPARISON_BUILD) -Wl,--memorysummary,${DISTDIR}/memoryfile.xml -o ${DISTDIR}/AVR_testng.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  -o ${DISTDIR}/AVR_testng.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}      -Wl,--start-group  -Wl,-lm -Wl,--end-group 
	${MP_CC_DIR}\\avr-objcopy -O ihex "${DISTDIR}/AVR_testng.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}" "${DISTDIR}/AVR_testng.${IMAGE_TYPE}.hex"
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${OBJECTDIR}
	${RM} -r ${DISTDIR}

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
