/*
 * SSD_int.h
 *
 *  Created on: Sep 12, 2022
 *      Author: bishoy
 */

#ifndef HAL_SSD_SSD_INT_H_
#define HAL_SSD_SSD_INT_H_

#define COM_CATHODE			0
#define COM_ANODE			1




#define SSD_TYPE			COM_CATHODE  /* user application*/


void SSD_INT(u8 A_u8SSD_PORT);
void SSD_vDisplayNum(u8 A_u8SSD_PORT,u8 A_u8Num);
void SSD_vTurnOff(u8 A_u8SSD_PORT);



#endif /* HAL_SSD_SSD_INT_H_ */
