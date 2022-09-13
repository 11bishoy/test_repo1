/*
 * main.c
 *
 *  Created on: Sep 11, 2022
 *      Author: bishoy
 */

#include"../LIB/STD_TYPES.h"
#include"../MCAL/DIO/DIO_int.h"
#include"../HAL/SSD/SSD_int.h"
#include<util/delay.h>

int main(void)
{
	SSD_INT(DIO_PORTA);
	SSD_INT(DIO_PORTD);
	u8 i=0;
	u8 x=0;
	while(1)
	{
		for(i=0;i<10;i++)
		{
			SSD_vDisplayNum(DIO_PORTD,i);

			for(x=0;x<10;x++)
			{
				SSD_vDisplayNum(DIO_PORTA,x);
				_delay_ms(350);
				SSD_vTurnOff(DIO_PORTA);
				//_delay_ms(300);
			}

			_delay_ms(300);
			SSD_vTurnOff(DIO_PORTD);
			//_delay_ms(300);

		}
	}
}



