#ifndef _USER_INTERFACE_
#define _USER_INTERFACE_

#include "GPIO_INIT.h"
#include "STD_TYPES.h"

/*select CLOCK*/
u32 SELECTED_CLOCK_FREQ=16000000; 											// 16 MHZ

/*select PORT */
#define SELECTED_PORT  								GPIO_PORTF

/*select PINS */
#define SELECTED_PIN1_Input  							PIN0
#define SELECTED_PIN2_Input  							PIN1

#define SELECTED_PIN_OUTPUT  							PIN2
/*select delay_time*/
#define DELAY_TIME_ON                     (uint32_t) (500)															//time in ms

#define DELAY_TIME_OFF                    (uint32_t) (500)															//time in ms

#define Take_run_time_input								1																							// 1 to chose take input in run time 

#endif