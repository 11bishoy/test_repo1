/*
 * DIO_int.h
 *
 *  Created on: Sep 11, 2022
 *      Author: bishoy
 */

#ifndef MCAL_DIO_DIO_INT_H_
#define MCAL_DIO_DIO_INT_H_


#define DIO_PORTA	0
#define DIO_PORTB	1
#define DIO_PORTC	2
#define DIO_PORTD	3

#define DIO_PIN0	0
#define DIO_PIN1	1
#define DIO_PIN2	2
#define DIO_PIN3	3
#define DIO_PIN4	4
#define DIO_PIN5	5
#define DIO_PIN6	6
#define DIO_PIN7	7

#define DIO_OUTPUT	1
#define DIO_INPUT	0

#define DIO_HIGH	1
#define DIO_LOW		0

#define DIO_PORT_HIGH	0xff
#define DIO_PORT_LOW	0X00

// functions for pin //
void DIO_vSetPinDir(u8 A_u8PortNo,u8 A_u8PinNo,u8 A_u8Dir);
void DIO_vSetPinVal(u8 A_u8PortNo,u8 A_u8PinNo,u8 A_u8Val);
u8   DIO_u8GetPinVal(u8 A_u8PortNo,u8 A_u8PinNo);


//functions for Port//
void DIO_vSetPortDir(u8 A_u8PortNo,u8 A_u8PortDir);
void DIO_vSetPortVal(u8 A_u8PortNo,u8 A_u8Val);
u8   DIO_u8GetPortVal(u8 A_u8PortNo);


#endif /* MCAL_DIO_DIO_INT_H_ */
