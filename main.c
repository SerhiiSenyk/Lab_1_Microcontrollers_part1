/*
 * Lab_1_Atmega2560.c
 *
 * Created: 21.02.2020 20:02:31
 * Author : Serhii-PC
 */ 
//21
/*Purpose:
 *	Button  PL3
 *	LED      port-A
 *	delay   0,55 
*/
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#define LED_ON(pin) PORTA |= (1 << pin);
#define LED_OFF(pin) PORTA &= ~(1 << pin);

int main(void)
{
	DDRA = 0xFF;
	DDRL = 0;
	while(1)
	{
		if((1 << PL3) & PINL){
			_delay_ms(30);
			for(int8_t pin = 0;pin < 8; pin += 2){
				LED_ON(pin)
				_delay_ms(550);
				LED_OFF(pin)
				if(pin == 6)
				pin = -1;
			}
	    }	
    }
	return 0;
}


