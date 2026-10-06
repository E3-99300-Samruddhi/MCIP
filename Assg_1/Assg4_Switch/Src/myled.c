/*
 * myled.c
 *
 *  Created on: 30-Sept-2026
 *      Author: mayuri27
 */
#include"myled.h"
 void led_init ()
 {
RCC->AHB1ENR |= BV(3);
		LED_PORT->MODER |=  ( BV(24)|BV(26)| BV(28)|BV(30));
		LED_PORT->MODER &= ~( BV(25)|BV(27)| BV(29)|BV(31));
		LED_PORT->OTYPER &= ~(  BV(12)|BV(13)| BV(14)|BV(15)  );
		LED_PORT->OSPEEDR &= ~( BV(22)| BV(23)| BV(24)| BV(25)| BV(26)| BV(27)| BV(28)| BV(29)| BV(30)|BV(31));
		LED_PORT->PUPDR &= ~( BV(22)| BV(23)| BV(24)| BV(25)| BV(26)| BV(27)| BV(28)| BV(29)| BV(30)|BV(31));

}
void led_on()
{

	LED_PORT->ODR |= ( BV(GREEN_LED)|BV(ORANGE_LED)| BV(RED_LED)|BV(BLUE_LED));
}

void led_off()
{
	LED_PORT->ODR &= ~( BV(GREEN_LED)|BV(ORANGE_LED)| BV(RED_LED)|BV(BLUE_LED));
}

void led_toggle(){

	LED_PORT->ODR |= ( BV(GREEN_LED));
	DelayMs(1000);
	LED_PORT->ODR &= ~( BV(GREEN_LED));
	DelayMs(500);
	LED_PORT->ODR |= (BV(ORANGE_LED));
	DelayMs(1000);
	LED_PORT->ODR &= ~(BV(ORANGE_LED));
	DelayMs(500);
	LED_PORT->ODR |= (BV(RED_LED));
	DelayMs(1000);
	LED_PORT->ODR &= ~(BV(RED_LED));
	DelayMs(500);
	LED_PORT->ODR |= (BV(BLUE_LED));
	DelayMs(1000);
	LED_PORT->ODR &= ~(BV(BLUE_LED));
	DelayMs(500);
}

