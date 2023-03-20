#include "GPIO_INIT.h"
#include "USER_INTERFACE.h"
#include "SYSTICK.h"
#include "NVIC.h"
#include "Macros.h"
#include "GPIO_ADRESSES.h"
#include "STD_TYPES.h"

#define RCGCGPIO *((unsigned int *) 0x400FE608)

u8 counter=0;
u8 test=0;
u8 TAKE_INBUT(void);

void HANDLE_SYSTICK(void){
INCREMENT();

}
int main(void){
		RCGCGPIO |= (0x20);
		Register_cb(HANDLE_SYSTICK);


GPIO_SetPinDirection(SELECTED_PORT,SELECTED_PIN1_Input, GPIO_INPUT);/*This Pin to take input from user by using button*/
GPIO_SetPinDirection(SELECTED_PORT,SELECTED_PIN2_Input, GPIO_INPUT);/*set this bin high on time to save time on and set high for secound time to save time off */
GPIO_SetPinDirection(SELECTED_PORT,SELECTED_PIN_OUTPUT,GPIO_OUTPUT);/*This Pin to show led toggle*/
 
 /*To take input from user in secound, number of click button equal time delay in secound*/
#if Take_run_time_input	
	
	u32 Time_ON=0;
	u32 Time_OFF=0;
	Time_ON=TAKE_INBUT()*1000;
	Time_OFF=TAKE_INBUT()*1000;
	while(1){
		SYS_INIT(SELECTED_CLOCK_FREQ/1000);
		GPIO_SetPinValue(SELECTED_PORT,SELECTED_PIN_OUTPUT, STD_HIGH);
		test=1;	
		system_msdelay(Time_ON);
		GPIO_SetPinValue(SELECTED_PORT,SELECTED_PIN_OUTPUT, STD_LOW);	
		test=0;
		system_msdelay(Time_OFF );

					}
#else		
while(1){
	SYS_INIT(SELECTED_CLOCK_FREQ/1000);
GPIO_SetPinValue(SELECTED_PORT,SELECTED_PIN_OUTPUT, STD_HIGH);
test=1;	
	
system_msdelay(DELAY_TIME_ON );
	GPIO_SetPinValue(SELECTED_PORT,SELECTED_PIN_OUTPUT, STD_LOW);	
test=0;

	system_msdelay(DELAY_TIME_OFF );

		}
#endif


//INTCTR();

}

		

u8 TAKE_INBUT(void){
	u8 temp=0;
	while(!GBIO_ReadPinValeu(SELECTED_PORT,SELECTED_PIN2_Input)){
		if (GBIO_ReadPinValeu(SELECTED_PORT,SELECTED_PIN1_Input)){
				counter++;
				CLEAR_BIT((GPIODATA(SELECTED_PORT)),SELECTED_PIN1_Input);

		}
}
	temp=counter;
	counter=0;
CLEAR_BIT((GPIODATA(SELECTED_PORT)),SELECTED_PIN2_Input);

return temp;
}
