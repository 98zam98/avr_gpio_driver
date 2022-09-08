#ifndef PRIVATE_AVR_GPIO_DRIVER
#define PRIVATE_AVR_GPIO_DRIVER
#include "hardware_avr_gpio_driver.h"
/*
#define porta *((volatile uint8_t*)0x3b)
#define ddra *((volatile uint8_t*)0x3a)
#define pina *((volatile uint8_t*)0x39)
*/
#define gpio_addr(reg,port) *((volatile uint8_t*)(reg+port))

#endif