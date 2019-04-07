/*
 * Timer_private.h
 *
 *  Created on: Apr 7, 2019
 *      Author: Hanna Nabil
 */

#ifndef TIMER_PRIVATE_H_
#define TIMER_PRIVATE_H_

#define TIMER_PRESCALER_UNINTIALIZED                            0

#define TIMER_INTERRUPT_ENABLE_MASK_TIMER0_OVERFLOW             0x02
#define TIMER_INTERRUPT_ENABLE_MASK_TIMER0_COMPARE              0x01
#define TIMER_INTERRUPT_ENABLE_MASK_TIMER1_OVERFLOW             0x04
#define TIMER_INTERRUPT_ENABLE_MASK_TIMER1_COMPARE_A            0x10
#define TIMER_INTERRUPT_ENABLE_MASK_TIMER1_COMPARE_B            0x08
#define TIMER_INTERRUPT_ENABLE_MASK_TIMER1_CAPTURE              0x20
#define TIMER_INTERRUPT_ENABLE_MASK_TIMER2_OVERFLOW             0x40
#define TIMER_INTERRUPT_ENABLE_MASK_TIMER2_COMPARE              0x80

#define  TIMER_INTERRUPT_DISABLE_MASK_TIMER1_CAPTURE            0xDF
#endif /* TIMER_PRIVATE_H_ */
