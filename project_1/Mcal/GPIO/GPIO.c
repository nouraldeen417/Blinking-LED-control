/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  GPIO.c
 *        \brief  
 *
 *      \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "STD_TYPES.h"
#include "Macros.h"
#include "GPIO_INIT.h"
#include "GPIO_ADRESSES.h"
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
void GPIO_SetPinDirection(u8 u8PortNumCpy, u8 u8PinNumCpy, u8 u8DirectionCpy) {
	switch (u8PortNumCpy) {
		case GPIO_PORTA:
			if (u8DirectionCpy == GPIO_OUTPUT) {
				SET_BIT((GPIODIR(GPIO_PORTA)),u8PinNumCpy);	
			}
			else {
				CLEAR_BIT((GPIODIR(GPIO_PORTA)),u8PinNumCpy);
			}
		case GPIO_PORTB:
			if (u8DirectionCpy == GPIO_OUTPUT) {
				SET_BIT((GPIODIR(GPIO_PORTB)),u8PinNumCpy);
			}
			else {
				CLEAR_BIT((GPIODIR(GPIO_PORTB)),u8PinNumCpy);
			}
		case GPIO_PORTC:
			if (u8DirectionCpy == GPIO_OUTPUT) {
				SET_BIT((GPIODIR(GPIO_PORTC)),u8PinNumCpy);
			}
			else {
				CLEAR_BIT((GPIODIR(GPIO_PORTC)),u8PinNumCpy);
			}
		case GPIO_PORTD:
			if (u8DirectionCpy == GPIO_OUTPUT) {
				SET_BIT((GPIODIR(GPIO_PORTD)),u8PinNumCpy);
			}
			else {
				CLEAR_BIT((GPIODIR(GPIO_PORTD)),u8PinNumCpy);
			}
		case GPIO_PORTE:
			if (u8DirectionCpy == GPIO_OUTPUT) {
				SET_BIT((GPIODIR(GPIO_PORTE)),u8PinNumCpy);
			}
			else {
				CLEAR_BIT((GPIODIR(GPIO_PORTE)),u8PinNumCpy);
			}
		case GPIO_PORTF:
			if (u8DirectionCpy == GPIO_OUTPUT) {
				SET_BIT((GPIODIR(GPIO_PORTF)),u8PinNumCpy);
			}
			else {
				CLEAR_BIT((GPIODIR(GPIO_PORTF)),u8PinNumCpy);
			}
	}

}


void GPIO_SetPinValue(u8 u8PortNumCpy, u8 u8PinNumCpy, u8 u8Value) {
	switch (u8PortNumCpy) {
		case GPIO_PORTA:
			if (u8Value == STD_HIGH) {
				SET_BIT((GPIODATA(GPIO_PORTA)),u8PinNumCpy);	
			}
			else {
				CLEAR_BIT((GPIODATA(GPIO_PORTA)),u8PinNumCpy);	
			}
		case GPIO_PORTB:
			if (u8Value == STD_HIGH) {
				SET_BIT((GPIODATA(GPIO_PORTB)),u8PinNumCpy);	
			}
			else {
				CLEAR_BIT((GPIODATA(GPIO_PORTB)),u8PinNumCpy);	
			}
		case GPIO_PORTC:
			if (u8Value == STD_HIGH) {
				SET_BIT((GPIODATA(GPIO_PORTC)),u8PinNumCpy);	
			}
			else {
				CLEAR_BIT((GPIODATA(GPIO_PORTC)),u8PinNumCpy);	
			}
		case GPIO_PORTD:
			if (u8Value == STD_HIGH) {
				SET_BIT((GPIODATA(GPIO_PORTD)),u8PinNumCpy);	
			}
			else {
				CLEAR_BIT((GPIODATA(GPIO_PORTD)),u8PinNumCpy);	
			}
		case GPIO_PORTE:
			if (u8Value == STD_HIGH) {
				SET_BIT((GPIODATA(GPIO_PORTE)),u8PinNumCpy);	
			}
			else {
				CLEAR_BIT((GPIODATA(GPIO_PORTE)),u8PinNumCpy);	
			}
		case GPIO_PORTF:
			if (u8Value == STD_HIGH) {
				SET_BIT((GPIODATA(GPIO_PORTF)),u8PinNumCpy);	
			}
			else {
				CLEAR_BIT((GPIODATA(GPIO_PORTF)),u8PinNumCpy);	
			}
	}
}
void GPIO_SetPinDigEnable(u8 u8PortNumCpy, u8 u8PinNumCpy, u8 u8DigEnable) {
	switch (u8PortNumCpy) {
		case GPIO_PORTA:
			if (u8DigEnable == GPIO_DEN_SET) {
				SET_BIT((GPIODEN(GPIO_PORTA)),u8PinNumCpy);		
			}
			else {
				CLEAR_BIT((GPIODEN(GPIO_PORTA)),u8PinNumCpy);
			}
		case GPIO_PORTB:
			if (u8DigEnable == GPIO_DEN_SET) {
				SET_BIT((GPIODEN(GPIO_PORTB)),u8PinNumCpy);
			}
			else {
				CLEAR_BIT((GPIODEN(GPIO_PORTB)),u8PinNumCpy);
			}
		case GPIO_PORTC:
			if (u8DigEnable == GPIO_DEN_SET) {
				SET_BIT((GPIODEN(GPIO_PORTC)),u8PinNumCpy);
			}
			else {
				CLEAR_BIT((GPIODEN(GPIO_PORTC)),u8PinNumCpy);
			}
		case GPIO_PORTD:
			if (u8DigEnable == GPIO_DEN_SET) {
				SET_BIT((GPIODEN(GPIO_PORTD)),u8PinNumCpy);
			}
			else {
				CLEAR_BIT((GPIODEN(GPIO_PORTD)),u8PinNumCpy);
			}
		case GPIO_PORTE:
			if (u8DigEnable == GPIO_DEN_SET) {
				SET_BIT((GPIODEN(GPIO_PORTE)),u8PinNumCpy);
			}
			else {
				CLEAR_BIT((GPIODEN(GPIO_PORTE)),u8PinNumCpy);
			}
		case GPIO_PORTF:
			if (u8DigEnable == GPIO_DEN_SET) {
				SET_BIT((GPIODEN(GPIO_PORTF)),u8PinNumCpy);
			}
			else {
				CLEAR_BIT((GPIODEN(GPIO_PORTF)),u8PinNumCpy);
			}
	}
}

void GPIO_SetPinCurrent(u8 u8PortNumCpy, u8 u8PinNumCpy, u8 u8pincurrent) {
	switch (u8PortNumCpy) {
		case GPIO_PORTA:
			if (u8pincurrent == PORT_BIN_CUR_2MA) {
				SET_BIT((GPIODR2R(GPIO_PORTA)),u8PinNumCpy);		
			}
			else 	if (u8pincurrent == PORT_BIN_CUR_4MA){
				CLEAR_BIT((GPIODR4R(GPIO_PORTA)),u8PinNumCpy);
			}
			else 	if (u8pincurrent == PORT_BIN_CUR_8MA){
				CLEAR_BIT((GPIODR8R(GPIO_PORTA)),u8PinNumCpy);
			}
			else{
			
			}
		case GPIO_PORTB:
			if (u8pincurrent == PORT_BIN_CUR_2MA) {
				SET_BIT((GPIODR2R(GPIO_PORTB)),u8PinNumCpy);		
			}
			else 	if (u8pincurrent == PORT_BIN_CUR_4MA){
				CLEAR_BIT((GPIODR4R(GPIO_PORTB)),u8PinNumCpy);
			}
			else 	if (u8pincurrent == PORT_BIN_CUR_8MA){
				CLEAR_BIT((GPIODR8R(GPIO_PORTB)),u8PinNumCpy);
			}
			else{
			
			}	
		case GPIO_PORTC:
				if (u8pincurrent == PORT_BIN_CUR_2MA) {
				SET_BIT((GPIODR2R(GPIO_PORTC)),u8PinNumCpy);		
			}
			else 	if (u8pincurrent == PORT_BIN_CUR_4MA){
				CLEAR_BIT((GPIODR4R(GPIO_PORTC)),u8PinNumCpy);
			}
			else 	if (u8pincurrent == PORT_BIN_CUR_8MA){
				CLEAR_BIT((GPIODR8R(GPIO_PORTC)),u8PinNumCpy);
			}
			else{
			
			}
		case GPIO_PORTD:
				if (u8pincurrent == PORT_BIN_CUR_2MA) {
				SET_BIT((GPIODR2R(GPIO_PORTD)),u8PinNumCpy);		
			}
			else 	if (u8pincurrent == PORT_BIN_CUR_4MA){
				CLEAR_BIT((GPIODR4R(GPIO_PORTD)),u8PinNumCpy);
			}
			else 	if (u8pincurrent == PORT_BIN_CUR_8MA){
				CLEAR_BIT((GPIODR8R(GPIO_PORTD)),u8PinNumCpy);
			}
			else{
			
			}
		case GPIO_PORTE:
					if (u8pincurrent == PORT_BIN_CUR_2MA) {
				SET_BIT((GPIODR2R(GPIO_PORTE)),u8PinNumCpy);		
			}
			else 	if (u8pincurrent == PORT_BIN_CUR_4MA){
				CLEAR_BIT((GPIODR4R(GPIO_PORTE)),u8PinNumCpy);
			}
			else 	if (u8pincurrent == PORT_BIN_CUR_8MA){
				CLEAR_BIT((GPIODR8R(GPIO_PORTE)),u8PinNumCpy);
			}
			else{
			
			}
		case GPIO_PORTF:
					if (u8pincurrent == PORT_BIN_CUR_2MA) {
				SET_BIT((GPIODR2R(GPIO_PORTF)),u8PinNumCpy);		
			}
			else 	if (u8pincurrent == PORT_BIN_CUR_4MA){
				CLEAR_BIT((GPIODR4R(GPIO_PORTF)),u8PinNumCpy);
			}
			else 	if (u8pincurrent == PORT_BIN_CUR_8MA){
				CLEAR_BIT((GPIODR8R(GPIO_PORTF)),u8PinNumCpy);
			}
			else{
			
			}
	}
}

void GPIO_SetPinInternalAttach(u8 u8PortNumCpy, u8 u8PinNumCpy, u8 u8InternalAttach){
	switch (u8PortNumCpy) {
		case GPIO_PORTA:
			if (u8InternalAttach == PORT_BIN_PUR) {
				SET_BIT((GPIOPUR(GPIO_PORTA)),u8PinNumCpy);		
			}
			else 	if (u8InternalAttach == PORT_BIN_PDR){
				CLEAR_BIT((GPIOPDR(GPIO_PORTA)),u8PinNumCpy);
			}
			else 	if (u8InternalAttach == PORT_BIN_ODR){
				CLEAR_BIT((GPIOODR(GPIO_PORTA)),u8PinNumCpy);
			}
			else{
			
			}
		case GPIO_PORTB:
			if (u8InternalAttach == PORT_BIN_PUR) {
				SET_BIT((GPIOPUR(GPIO_PORTB)),u8PinNumCpy);		
			}
			else 	if (u8InternalAttach == PORT_BIN_PDR){
				CLEAR_BIT((GPIOPDR(GPIO_PORTB)),u8PinNumCpy);
			}
			else 	if (u8InternalAttach == PORT_BIN_ODR){
				CLEAR_BIT((GPIOODR(GPIO_PORTB)),u8PinNumCpy);
			}
			else{
			
			}		case GPIO_PORTC:
			if (u8InternalAttach == PORT_BIN_PUR) {
				SET_BIT((GPIOPUR(GPIO_PORTC)),u8PinNumCpy);		
			}
			else 	if (u8InternalAttach == PORT_BIN_PDR){
				CLEAR_BIT((GPIOPDR(GPIO_PORTC)),u8PinNumCpy);
			}
			else 	if (u8InternalAttach == PORT_BIN_ODR){
				CLEAR_BIT((GPIOODR(GPIO_PORTC)),u8PinNumCpy);
			}
			else{
			
			}
		case GPIO_PORTD:
			if (u8InternalAttach == PORT_BIN_PUR) {
				SET_BIT((GPIOPUR(GPIO_PORTD)),u8PinNumCpy);		
			}
			else 	if (u8InternalAttach == PORT_BIN_PDR){
				CLEAR_BIT((GPIOPDR(GPIO_PORTD)),u8PinNumCpy);
			}
			else 	if (u8InternalAttach == PORT_BIN_ODR){
				CLEAR_BIT((GPIOODR(GPIO_PORTD)),u8PinNumCpy);
			}
			else{
			
			}		case GPIO_PORTE:			
			if (u8InternalAttach == PORT_BIN_PUR) {
				SET_BIT((GPIOPUR(GPIO_PORTE)),u8PinNumCpy);		
			}
			else 	if (u8InternalAttach == PORT_BIN_PDR){
				CLEAR_BIT((GPIOPDR(GPIO_PORTE)),u8PinNumCpy);
			}
			else 	if (u8InternalAttach == PORT_BIN_ODR){
				CLEAR_BIT((GPIOODR(GPIO_PORTE)),u8PinNumCpy);
			}
			else{
			
			}
		case GPIO_PORTF:
			if (u8InternalAttach == PORT_BIN_PUR) {
				SET_BIT((GPIOPUR(GPIO_PORTF)),u8PinNumCpy);		
			}
			else 	if (u8InternalAttach == PORT_BIN_PDR){
				CLEAR_BIT((GPIOPDR(GPIO_PORTF)),u8PinNumCpy);
			}
			else 	if (u8InternalAttach == PORT_BIN_ODR){
				CLEAR_BIT((GPIOODR(GPIO_PORTF)),u8PinNumCpy);
			}
			else{
			
			}
	}
}
u8 GBIO_ReadPinValeu(u8 u8PortNumCpy,u8 u8PinNumCpy){


u8 result;
         result = (GPIODATA(u8PortNumCpy)) & (1<<u8PinNumCpy) ;
         if (result==0)
               return 0 ;
         else
              return 1 ;

}
/**********************************************************************************************************************
 *  END OF FILE: GPIO.c
 *********************************************************************************************************************/




