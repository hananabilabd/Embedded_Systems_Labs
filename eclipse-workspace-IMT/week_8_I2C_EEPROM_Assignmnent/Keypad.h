/*
 * Keypad.h
 *
 *  Created on: Mar 9, 2018
 *      Author: Hanna Nabil
 */

#ifndef KEYPAD_H_
#define KEYPAD_H_
#define NULL 20 // Any value except Keys
void Keypad_Init(void);
u8 Keypad_GetButtonSatus(u8 Button_Num);
u8 Keypad_GetKey(void);

#endif /* KEYPAD_H_ */
