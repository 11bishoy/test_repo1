/*
 * KPD_prg.c
 *
 *  Created on: Sep 13, 2022
 *      Author: bishoy
 */
#include"../../LIB/STD_TYPES.h"
#include"KPD_int.h"
#include"../../MCAL/DIO/DIO_int.h"
#include<util/delay.h>


void KPD_INT(void)
{
	DIO_vSetPortDir(KPD_PORT,0X0F); /*from Bit 0 to 3 OUTPUT ...from Bit 4 to 7 INPUT...at PORTA*/
	DIO_vSetPortVal(KPD_PORT,0XFF); /*activate the PULLUP resistor from BIT 4 to 7...and set HIGHT from BIT 3 to 7 */

}

u8 KPD_u8PRESSED_KEY(void)
{
	u8 PRESSED_KEY=0;
	for(u8 COL=0;COL<4;COL++)
	{

		DIO_vSetPinVal(KPD_PORT,COL,DIO_LOW);

		for(u8 ROW=0; ROW<4; ROW++)
		{

			if(DIO_u8GetPinVal(KPD_PORT,(ROW+4))==0)
			{
				PRESSED_KEY=ROW+(COL*4)+1; 			 /* equation to get the value each button  of keypad */
			}
			while(DIO_u8GetPinVal(KPD_PORT,(ROW+4))==0)
			{

			}
			_delay_ms(10);						/*delay for DEBOUNCING */

		}

		DIO_vSetPinVal(KPD_PORT,COL,DIO_HIGH);    /*deactivate the current column*/
	}
	return PRESSED_KEY;

}

