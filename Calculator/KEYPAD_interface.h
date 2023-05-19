/**************************************************************/
/**************************************************************/
/***************     Author: Marwan Yasser   ******************/
/***************     Layer: HAL              ******************/
/***************     SWC: KEYPAD   			 ******************/
/***************     Version: 1.00   		 ******************/
/**************************************************************/
/**************************************************************/
#ifndef KEYPAD_INTERFACE_H_
#define KEYPAD_INTERFACE_H_

#define KPD_CLR  	'c'
#define KPD_PLUS  	'+'
#define KPD_MINUS  	'-'
#define KPD_MUL		'*'
#define KPD_DIV		'/'
#define KPD_EQUAL 	'='

u8 KPD_u8GetPressedKey(void);


#endif