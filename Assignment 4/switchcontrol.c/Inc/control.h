/*
 * my_led.h
 *
 *  Created on: Dec 17, 2025
 *      Author: kiran_z6dopa8
 */

#ifndef CONTROL_H_
#define CONTROL_H_

#include <stdint.h>
#include <stdio.h>
#include"stm32f407xx.h"

#define BV(n) (1 << (n))

void led_init(void);
void led_on(void);
void led_off(void);
int switch_status(void);
void switch_init(void);
#endif /* CONTROL_H_ */
