/*
 * main.c
 *
 *  Created on: Aug 30, 2022
 *      Author: bishoy
 */
#include<avr\io.h>
#include<util/delay.h>
#define counter	4


int main(void)
{
	DDRA=0b00001111;   			// PA0 -> OUTPUT DIRECTION
	int iterator;					// Iterator
	while(1) // SUPER LOOP
	{

	for(iterator=0;iterator<counter;iterator++)
		{
			PORTA=0b00000001<<iterator; 		        // PAO -> HIGHT shifted by 1
		    _delay_ms(1000);			//Delay 2sec
			PORTA=0;					// PA0-> LOW
			_delay_ms(1000);			//Delay 2sec
		}



	}
}

