/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  FileName.c
 *        \brief  
 *
 *      \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "NVIC.h"
#include "MACROS.h"
/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


/******************************************************************************
* \Syntax          : Std_ReturnType FunctionName(AnyType parameterName)        
* \Description     : Describe this service                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : parameterName   Parameter Describtion                     
* \Parameters (out): None                                                      
* \Return value:   : Std_ReturnType  E_OK
*                                    E_NOT_OK                                  
*******************************************************************************/

static void NVIC_SetPriorityGrouping(uint32_t PriorityGroup)
{
  uint32_t  reg_value  =   SCB -> APINT ;
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07);               /* only values 0..7 are used          */
	
                                                       /* read old register configuration    */
  reg_value &= ~(VECTKEY_Msk | APINT_PRIGROUP_Msk);             /* clear bits to change               */
  reg_value  =  (reg_value                                 |
                ((uint32_t)0x5FA << APINT_PRIGROUP_Pos)    |
                (PriorityGroupTmp << 8));                                     /* Insert write key and priorty group */
 SCB -> APINT =  reg_value;
}

static void NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority){
uint32_t PriorityTmp = (priority & (uint32_t)0x07);  
uint32_t Pri_Offset=0;
uint32_t Priority_regs_Offset=0;	
       
			if (SysTick <IRQn){
	
						Priority_regs_Offset =(IRQn/4);
	
						Pri_Offset =((IRQn*8)+5) - (32*Priority_regs_Offset) ;

						PriorityTmp = (PriorityTmp<<Pri_Offset);	

						NVIC_PRI->PRI[Priority_regs_Offset] |= PriorityTmp;

			}
	  

			else{
				
				
			switch(IRQn){
			case Memory_Management:
						PriorityTmp = (PriorityTmp<<5);	
						SCB->SYSPRI[0] |= PriorityTmp;	
		          	break;
			case Bus_Fault:
						PriorityTmp = (PriorityTmp<<13);	
						SCB->SYSPRI[0] |= PriorityTmp;	
		         				break;
			case Usage_Fault:
						PriorityTmp = (PriorityTmp<<21);	
						SCB->SYSPRI[0] |= PriorityTmp;	
		         break;
			case SVCall:
						PriorityTmp = (PriorityTmp<<29);	
						SCB->SYSPRI[1] |= PriorityTmp;	
		         break;
			case Debug_Monitor:
						PriorityTmp = (PriorityTmp<<5);	
						SCB->SYSPRI[2] |= PriorityTmp;	
		         break;
			case PendSV:
						PriorityTmp = (PriorityTmp<<21);	
						SCB->SYSPRI[2] |= PriorityTmp;	
		         break;
			case SysTick:
						PriorityTmp = (PriorityTmp<<29);	
						SCB->SYSPRI[2] |= PriorityTmp;	
		         break;
						
			default:
					break;				
				}

} 
}
static void NVIC_EnableIRQ(IRQn_Type IRQn){
	if(SysTick < IRQn){
		u8 IRQNTemp=IRQn -16;

		SET_BIT(NVIC_EN -> EN[((u8)( IRQNTemp) >> 5)],(  IRQNTemp % 32 ));	/* enable interrupt */
					
	}
	else{
		switch(IRQn){
			case Memory_Management:
					SET_BIT( SCB->SYSHNDCTRL	,16);	/* enable interrupt */
				break;
			case Bus_Fault:
					SET_BIT( SCB->SYSHNDCTRL	,17);	/* enable interrupt */
				break;
			case Usage_Fault:
					SET_BIT( SCB->SYSHNDCTRL	,18);	/* enable interrupt */
				break;
			default:
					break;
		
		}
		}
	
	
	
	}		
static void NVIC_DisableIRQ(IRQn_Type IRQn)
{
	if(SysTick < IRQn){
		
	u8 IRQNTemp=IRQn -16;	

		SET_BIT(NVIC_DIS -> DIS[((u8)(IRQNTemp) >> 5)],( IRQNTemp % 32 ));	/* enable interrupt */
					
}
	else{
		switch(IRQn){
			
			case Memory_Management:
					CLEAR_BIT( SCB->SYSHNDCTRL, 16);	/* enable interrupt */
				break;
			
			case Bus_Fault:
					CLEAR_BIT( SCB->SYSHNDCTRL, 17);	/* enable interrupt */
				break;
			
			case Usage_Fault:
					CLEAR_BIT( SCB->SYSHNDCTRL, 18);	/* enable interrupt */
				break;
			
			default:
					break;
		
		}
		}
	
	
	
	}
void INTCTR(){

//NVIC_SetPriorityGrouping(4);

NVIC_SetPriority(Memory_Management, 2);  
NVIC_SetPriority(SysTick, 1);  
NVIC_SetPriority(Usage_Fault, 2);  
			
//NVIC_EnableIRQ(GPIO_Port_A_Interrupt);
/* // 
	SET_BIT(NVIC->EN[1],30);
		SET_BIT(NVIC->EN[1],16);*/
 //NVIC_EnableIRQ(GPIO_Port_F_Interrupt);
//	 NVIC_EnableIRQ(Bus_Fault);
//	 NVIC_EnableIRQ(Usage_Fault);
//	 NVIC_EnableIRQ(Memory_Management);
//	
//SET_BIT(NVIC_DIS->DIS[0],0);
	//NVIC_DisableIRQ(Usage_Fault); 
	 //NVIC_DisableIRQ(Bus_Fault);
}

/**********************************************************************************************************************
 *  END OF FILE: FileName.c
 *********************************************************************************************************************/






