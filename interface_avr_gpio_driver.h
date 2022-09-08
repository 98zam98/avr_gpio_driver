#ifndef INTERFACE_AVR_GPIO_DRIVER
#define INTERFACE_AVR_GPIO_DRIVER
#include "private_avr_gpio_driver.h"
/*
port_num : a_port b_port c_port
logic_value : high low
io : output input  
*/
//void void_GPIO_init(uint8_t port_num,uint8_t pin_num,uint8_t io);
//void void_GPIO_write(uint8_t port_num,uint8_t pin_num,uint8_t logic_value);

 

#define void_GPIO_init(port_num,pin_num,io)					bitWrite( gpio_addr(ddr_reg ,port_num),pin_num,io)
#define void_GPIO_write(port_num,pin_num,logic_value)		bitWrite( gpio_addr(port_reg,port_num),pin_num,logic_value)
#define void_GPIO_toggle(port_num,pin_num)					togglebit(gpio_addr(port_reg,port_num),pin_num)
#define void_GPIO_read(port_num,pin_num)					bitRead(  gpio_addr(pin_reg ,port_num),pin_num)

#endif