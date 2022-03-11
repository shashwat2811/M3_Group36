/**
 * Name of Project: Remote key-less entry system
 * Created on: 10 March 2022
 * Auther: Vaishnavi Ankar
 */
#include "MyStm32f407xx.h"

#define BUTTON_PRESSED ENABLE




void delay(void)
{
	for (uint32_t i=0; i < 500000; i++);
}
void delay_ms(uint32_t time) //Delay in ms
{
	uint32_t i=0;
   while(time--)
   {
      i=12000;  // Define your own
      while(i--) ;
   }
int encrypt(int count)
{
	if(count==1)
		return 123;
	else if(count==2)
		return 234;
	else if(count==3)
		return 345;
	else if(count==4)
		return 456;
}

/**
 * Function for window
 */
void window(void){
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,1);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,1);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,1);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,1);
}
/**
 * Function for alarm
 */
void alarm(void){
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,0);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,0);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,0);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,0);
}
/**
 * Function for car battery
 */
void car_bat(void){
	alarm();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,1);
	delay_ms(10000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,1);
	delay_ms(10000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,1);
	delay_ms(10000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,1);
	delay_ms(10000);
}
/**
 * Function for alarm
 */
void door(void){
	alarm();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,1);
	delay_ms(10000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,1);
	delay_ms(10000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,1);
	delay_ms(10000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,1);
	delay_ms(10000);
}

int main(void)
{

	GPIO_Handle_t GpioLeds, GpioBtn;
	GpioLeds.pGPIOx = GPIOD;
	GpioLeds.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;//Configure the mode of GPIO pins
	GpioLeds.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLeds.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLeds.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE); //Enable peripheral lock
	GPIO_Init(&GpioLeds);


	GpioLeds.pGPIOx = GPIOD;
	GpioLeds.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;//Configure the mode of GPIO pins
	GpioLeds.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLeds.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLeds.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);//Enable peripheral lock
	GPIO_Init(&GpioLeds);

	GpioLeds.pGPIOx = GPIOD;
	GpioLeds.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;//Configure the mode of GPIO pins
	GpioLeds.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLeds.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLeds.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);//Enable peripheral lock
	GPIO_Init(&GpioLeds);

	GpioLeds.pGPIOx = GPIOD;
	GpioLeds.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;//Configure the mode of GPIO pins
	GpioLeds.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLeds.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLeds.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);//Enable peripheral lock
	GPIO_Init(&GpioLeds);

	GpioBtn.pGPIOx = GPIOA;
	GpioBtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;//Configure the mode of GPIO pins
	GpioBtn.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
	GpioBtn.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioBtn.GPIO_PinConfig.GPIO_PinOPType = GPIO_NO_PUPD;
	GPIO_PeriClockControl(GPIOA, ENABLE);//Enable peripheral lock
	GPIO_Init(&GpioBtn);

	uint8_t count=0;//set a count
	uint32_t time = 12000*5000;//input time 5 second for user


	while(1)//main loop
	{
		if(time!=0){
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,1);//Input phase
		}



		 while(time!=0)
		 {
			 if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BUTTON_PRESSED)
			 {
			 				count+=1;
			 				GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,1);
			 				delay_ms(20000);//button press delay and indication for not give input currently
			 				GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,0);
			 }

			 time-=1;
			 continue;
		 }

		 if(time==0){
		 			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,0);
		 }

        int enc=encrypt(count);
		if(enc==123){
			window();
		}
		else if(enc==234){
			alarm();
		}
		else if(enc==345){
			car_bat();
		}
		else if(enc==456){
			door();
		}

		delay_ms(30000);
		alarm();
		time = 12000*5000;
		count=0;

	}

}}
