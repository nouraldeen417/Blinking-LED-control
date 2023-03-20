/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  <GPIO_ADDRESSES>
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef GPIO_ADDRESSES_H
#define GPIO_ADDRESSES_H


/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define GBIO_OFFET 0x40004000


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/
#define GBIO_OFFSET(x)	 (x<4? (((0x40004000)+(x*0x1000))) : (((0x40024000)+((x-4)*0x1000))))
#define GPIODATA(x) *(volatile u32 *)(GBIO_OFFSET(x)+0x3fc )
#define GPIODIR(x) *(volatile u32 *)(GBIO_OFFSET(x)+0x0400 )
#define GPIOIS(x) *(volatile uint32_t *)(GBIO_OFFSET(x)+0x0408 )
#define GPIOIBE(x) *(volatile uint32_t *)(GBIO_OFFSET(x)+0x040c )
#define GPIOIEV(x) *(volatile uint32_t *)(GBIO_OFFSET(x)+0x0410  )
#define GPIOIM(x)  *(volatile uint32_t *)(GBIO_OFFSET(x)+0x0414 )
#define GPIOMIS(x)  *(volatile uint32_t *)(GBIO_OFFSET(x)+0x0418 )
#define GPIOICR(x) *(volatile uint32_t *)(GBIO_OFFSET(x)+0x041c  )
#define GPIOAFSEL(x) *(volatile uint32_t *)(GBIO_OFFSET(x)+0x0420  )
#define GPIODR2R(x)  *(volatile u32 *)(GBIO_OFFSET(x)+0x0500  )
#define GPIODR4R(x) *(volatile u32 *)(GBIO_OFFSET(x)+0x0504  )	
#define GPIODR8R(x) *(volatile u32 *)(GBIO_OFFSET(x)+0x0508  )
#define GPIOODR(x) *(volatile u32 *)(GBIO_OFFSET(x)+0x050c  )
#define GPIOPUR(x) *(volatile u32 *)(GBIO_OFFSET(x)+0x0510  )
#define GPIOPDR(x) *(volatile u32 *)(GBIO_OFFSET(x)+0x0514  )
#define GPIOSLR(x) *(volatile uint32_t *)(GBIO_OFFSET(x)+0x0518  )	
#define GPIODEN(x) *(volatile u32 *)(GBIO_OFFSET(x)+0x051c  )	
#define GPIOLOCK (x) *(volatile uint32_t *)(GBIO_OFFSET(x)+0x0520  )
#define GPIOCR (x) *(volatile uint32_t *)(GBIO_OFFSET(x)+0x0524  )
#define GPIOAMSEL (x)*(volatile uint32_t *)(GBIO_OFFSET(x)+0x0528  )
#define GPIOPCTL (x)*(volatile uint32_t *)(GBIO_OFFSET(x)+0x052c  )	
	

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

 
#endif  /* GPIO_ADDRESSES */

/**********************************************************************************************************************
 *  END OF FILE: Std_Types.h
 *********************************************************************************************************************/

