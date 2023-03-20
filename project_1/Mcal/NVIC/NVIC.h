/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  <Write File Name>
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef NVIC_H
#define NVIC_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "STD_TYPES.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define VECTKEY_Pos              16                /*!< APINT: VECTKEY Position */
#define APINT_PRIGROUP_Pos       8                 /*!< APINT: PRIGROUP Position */
#define BASE_ADD 		          (uint32_t) 0xE000E000
 

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/
#define VECTKEY_Msk                     (0xFFFFUL << VECTKEY_Pos)            /*!< APINT: VECTKEY Mask */


#define APINT_PRIGROUP_Msk              (7UL << APINT_PRIGROUP_Pos)   
 

#define EN_BASE                         (BASE_ADD +  0x0100) 
#define DIS_BASE                        (BASE_ADD +  0x0180) 
#define PIR_BASE                        (BASE_ADD +  0x0400) 


#define NVIC_EN                         ((NVIC_EN_TYPE      *)   EN_BASE     ) 
#define NVIC_DIS                        ((NVIC_DIS_TYPE     *)   DIS_BASE    ) 
#define NVIC_PRI                        ((NVIC_PRI_TYPE     *)   PIR_BASE    ) 

#define SCB_BASE                        (BASE_ADD +  0x0D00) 

#define SCB                             ((SCB_Type      *)     SCB_BASE    ) 



/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
 typedef struct 
{
		uint32_t   CPUID;                                             
    uint32_t  INTCTRL;                     
		uint32_t  VTABLE;          
    uint32_t  APINT;                
		uint32_t  SYSCTRL;                                       
		uint32_t  CFGCTRL;                  
		uint32_t  SYSPRI[3] ;                                    
		uint32_t  SYSHNDCTRL ;    
	  uint32_t  FAULTSTAT;    
	  uint32_t  HFAULTSTAT;    
	  uint32_t  MMADDR;    
	  uint32_t  FAULTADDR;    




} SCB_Type;

 typedef struct 
{
    uint32_t EN[5];                                     

} NVIC_EN_TYPE;

typedef struct 
{
    uint32_t DIS[5];                                      
} NVIC_DIS_TYPE;

typedef struct 
{
    uint32_t PRI[35];                                       
} NVIC_PRI_TYPE;

typedef enum IRQ
{
		Memory_Management=4,
		Bus_Fault=5,
		Usage_Fault=6,
		SVCall=11,
		Debug_Monitor=12,
		PendSV=14,
		SysTick=15,
		GPIO_Port_A_Interrupt = 16u,
    GPIO_Port_B_Interrupt = 17u,
    GPIO_Port_C_Interrupt = 18u,
    GPIO_Port_D_Interrupt = 19u,
    GPIO_Port_E_Interrupt = 20u,
    UART_0_Interrupt = 21u,
    UART_1_Interrupt = 22u,
    SSI_0_Interrupt = 23u,
    I2C_0_Interrupt = 24u,
    PWM_0_Fault_Interrupt = 25u,
    PWM_0_Generator_0_Interrupt = 26u,
    PWM_0_Generator_1_Interrupt = 27u,
    PWM_0_Generator_2_Interrupt = 28u,
    QEI_0_Interrupt = 29u,
    ADC_0_Sequence_0_Interrupt = 30u,
    ADC_0_Sequence_1_Interrupt = 31u,
    ADC_0_Sequence_2_Interrupt = 32u,
    ADC_0_Sequence_3_Interrupt = 33u,
    Watchdog_0_and_1_Interrupt = 34u,
    _16_32_Bit_Timer_0A_Interrupt = 35u,
    _16_32_Bit_Timer_0B_Interrupt = 36u,
    _16_32_Bit_Timer_1A_Interrupt = 37u,
    _16_32_Bit_Timer_1B_Interrupt = 38u,
    _16_32_Bit_Timer_2A_Interrupt = 39u,
    _16_32_Bit_Timer_2B_Interrupt = 40u,
    Analog_Comparator_0_Interrupt = 41u,
    Analog_Comparator_1_Interrupt = 43u,
    System_Control_Interrupt = 44u,
    Flash_and_EEPROM_Control_Interrupt = 45u,
    GPIO_Port_F_Interrupt = 46u,
    UART_2_Interrupt = 49u,
    SSI_1_Interrupt = 50u,
    _16_32_Bit_Timer_3A_Interrupt = 51u,
    _16_32_Bit_Timer_3B_Interrupt = 52u,
    I2C_1_Interrupt = 53u,
    QEI_1_Interrupt = 54u,
    CAN_0_Interrupt = 55u,
    CAN_1_Interrupt = 56u,
    Hibernation_Module_Interrupt = 59u,
    USB_Interrupt = 60u,
    PWM_Generator_3_Interrupt = 61u,
    uDMA_Software_Interrupt = 62u,
    uDMA_Error_Interrupt = 63u,
    ADC_1_Sequence_0_Interrupt = 64u,
    ADC_1_Sequence_1_Interrupt = 65u,
    ADC_1_Sequence_2_Interrupt = 66u,
    ADC_1_Sequence_3_Interrupt = 67u,
    SSI_2_Interrupt = 73u,
    SSI_3_Interrupt = 74u,
    UART_3_Interrupt = 75u,
    UART_4_Interrupt = 76u,
    UART_5_Interrupt = 77u,
    UART_6_Interrupt = 78u,
    UART_7_Interrupt = 79u,
    I2C_2_Interrupt = 84u,
    I2C_3_Interrupt = 85u,
    _16_32_Bit_Timer_4A_Interrupt = 86u,
    _16_32_Bit_Timer_4B_Interrupt = 87u,
    _16_32_Bit_Timer_5A_Interrupt = 108u,
    _16_32_Bit_Timer_5B_Interrupt = 109u,
    _32_64_Bit_Timer_0A_Interrupt = 110u,
    _32_64_Bit_Timer_0B_Interrupt = 110u,
    _32_64_Bit_Timer_1A_Interrupt = 112u,
    _32_64_Bit_Timer_1B_Interrupt = 113u,
    _32_64_Bit_Timer_2A_Interrupt = 114u,
    _32_64_Bit_Timer_2B_Interrupt = 115u,
    _32_64_Bit_Timer_3A_Interrupt = 116u,
    _32_64_Bit_Timer_3B_Interrupt = 117u,
    _32_64_Bit_Timer_4A_Interrupt = 118u,
    _32_64_Bit_Timer_4B_Interrupt = 119u,
    _32_64_Bit_Timer_5A_Interrupt = 120u,
    _32_64_Bit_Timer_5B_Interrupt = 121u,
    System_Exception_Interrupt = 122u,
    PWM_1_Generator_0_Interrupt = 150u,
    PWM_1_Generator_1_Interrupt = 151u,
    PWM_1_Generator_2_Interrupt = 152u,
    PWM_1_Generator_3_Interrupt = 153u,
    PWM_1_Fault_Interrupt = 154u
}IRQn_Type ;

 


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void NVIC_SetPriorityGrouping(uint32_t PriorityGroup);
void NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority);  
void NVIC_EnableIRQ(IRQn_Type IRQn);
void NVIC_DisableIRQ(IRQn_Type IRQn);  
void INTCTR();

 
#endif  /* FILE_NAME_H */

/**********************************************************************************************************************
 *  END OF FILE: Std_Types.h
 *********************************************************************************************************************/







