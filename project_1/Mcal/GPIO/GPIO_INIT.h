/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  <GPIO_INIT>
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef GPIO_INIT_H
#define GPIO_INIT_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "STD_TYPES.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
/*BIN_LEVEL_VALUES */
#define PORT_BIN_Heigh                                      (PORT_BIN_LEVEL)(STD_HIGH)
#define PORT_BIN_Low                                        (PORT_BIN_LEVEL)(STD_LOW)
#define PORT_BIN_INVALID                                    (PORT_BIN_LEVEL)(2)

/*BIN_DIRECTION_VALEY*/
#define GPIO_INPUT                                          (PORT_BIN_DIRECTION)(0)
#define GPIO_OUTPUT                                         (PORT_BIN_DIRECTION)(1)
#define PORT_BIN_DIREC_INVALID                              (PORT_BIN_DIRECTION)(2)

/*BIN_INTERNAL_ATTACH*/
#define PORT_BIN_PUR                                        (PORT_BIN_INTERNAL_RES)(0)
#define PORT_BIN_PDR                                        (PORT_BIN_INTERNAL_RES)(1)
#define PORT_BIN_ODR                                        (PORT_BIN_INTERNAL_RES)(2)
#define PORT_BIN_RES_INVALID                                (PORT_BIN_INTERNAL_RES)(3)

/*BIN_CURRENT_*/
#define PORT_BIN_CUR_2MA                                    (PORT_BIN_CURRENT)(0)
#define PORT_BIN_CUR_4MA                                    (PORT_BIN_CURRENT)(1)
#define PORT_BIN_CUR_8MA                                    (PORT_BIN_CURRENT)(2)
#define PORT_BIN_CUR_INVALID                                (PORT_BIN_CURRENT)(3)

/*BIN_MODE_*/
#define GPIO_DEN_SET               		                    (PORT_BIN_MODE)(0)

/*BORT_NUMBER_*/
#define GPIO_PORTA 											(PORT_NUMBER)(0)
#define GPIO_PORTB 											(PORT_NUMBER)(1)
#define GPIO_PORTC 											(PORT_NUMBER)(2)
#define GPIO_PORTD 											(PORT_NUMBER)(3)
#define GPIO_PORTE 											(PORT_NUMBER)(4)
#define GPIO_PORTF 											(PORT_NUMBER)(5)
/*BIN_NUMBER_*/
#define PIN0 												(BIN_NUMBER)(0)
#define PIN1 												(BIN_NUMBER)(1)
#define PIN2 												(BIN_NUMBER)(2)
#define PIN3 												(BIN_NUMBER)(3)
#define PIN4 												(BIN_NUMBER)(4)
#define PIN5 												(BIN_NUMBER)(5)
#define PIN6 												(BIN_NUMBER)(6)
#define PIN7 												(BIN_NUMBER)(7)


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void GPIO_SetPinValue(u8 u8PortNumCpy,u8 u8PinNumCpy, u8 u8ValueCpy);
void GPIO_SetPinDirection(u8 u8PortNumCpy, u8 u8PinCpy,u8 u8DirCpy);
void GPIO_SetPinDigEnable(u8 u8PortNumCpy, u8 u8PinCpy, u8 u8DigEnable);
void GPIO_SetPinCurrent(u8 u8PortNumCpy, u8 u8PinCpy, u8 u8PinCurrent);
void GPIO_SetPinInternalAttach(u8 u8PortNumCpy, u8 u8PinCpy, u8 u8InternalAttach);
u8 GBIO_ReadPinValeu(u8 u8PortNumCpy,u8 u8PinNumCpy); 
#endif  /* GPIO_INIT */

/**********************************************************************************************************************
 *  END OF FILE: Std_Types.h
 *********************************************************************************************************************/
