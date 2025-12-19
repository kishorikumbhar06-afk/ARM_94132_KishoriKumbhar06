/*
 * my_led.h
 *
 *  Created on: Dec 19, 2025
 *      Author: Admin
 */

#ifndef TOGGLE_H_
#define TOGGLE_H_

#include <stdint.h>
#include <stdio.h>
#include"stm32f407xx.h"

#define BV(n) (1 << (n))

void led_init(void);
void led_toggle(void);
int switch_status(void);
void switch_init(void);

#endif /* TOGGLE_H_ */

