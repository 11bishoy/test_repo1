/*
 * SSD_prg.c
 *
 *  Created on: Sep 12, 2022
 *      Author: bishoy
 */

#include"../../LIB/STD_TYPES.h"
#include"../../MCAL/DIO/DIO_int.h"
#include"SSD_int.h"


static const u8 G_u8SSD_Nums[]={0b10111111/*0*/,
								0b10000110/*1*/,
								0b11011011/*2*/,
								0b11001111/*3*/,
								0b11100110/*4*/,
								0b11101101/*5*/,
								0b11111101/*6*/,
								0b10000111/*7*/,
								0b11111111/*8*/,
								0b11101111/*9*/
								};



void SSD_INT(u8 A_u8SSD_PORT)
{
	DIO_vSetPortDir(A_u8SSD_PORT,0xff);
}


void SSD_vDisplayNum(u8 A_u8SSD_PORT,u8 A_u8Num)
{
	if(A_u8Num<10)
	{
		#if SSD_TYPE==COM_CATHODE
				DIO_vSetPortVal(A_u8SSD_PORT,G_u8SSD_Nums[A_u8Num]);

		#elif SSD_TYPE==COM_ANODE
				DIO_vSetPortVal(A_u8SSD_PORT,~G_u8SSD_Nums[A_u8Num]);
		#endif

	}




}
void SSD_vTurnOff(u8 A_u8SSD_PORT)
{
	#if SSD_TYPE==COM_CATHODE
		DIO_vSetPortVal(A_u8SSD_PORT,0X00);
	#elif SSD_TYPE==COM_ANODE
		DIO_vSetPortVal(A_u8SSD_PORT,0XFF);
	#endif
}
