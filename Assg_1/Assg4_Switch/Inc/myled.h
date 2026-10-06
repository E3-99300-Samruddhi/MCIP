/*
 * myled.h
 *
 *  Created on: 30-Sept-2026
 *      Author: mayuri27
 */

#ifndef MYLED_H_
#define MYLED_H_
#include<stm32f4xx.h>

#define LED_PORT GPIOD
#define GREEN_LED 12
#define ORANGE_LED 13
#define RED_LED 14
#define BLUE_LED 15

void led_init();
void led_on();
void led_off();
int is_switch_press();
void led_toggle();
#endif /* MYLED_H_ */
