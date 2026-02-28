#include <ch32v00x.h>
#include "gpio.h"

void gpio_init(int pin, int mode)
{
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);

    GPIO_InitTypeDef gpio;
    gpio.GPIO_Pin = pin;
    gpio.GPIO_Speed = GPIO_Speed_50MHz;

    if (mode == GPIO_OUTPUT)
        gpio.GPIO_Mode = GPIO_Mode_Out_PP;
    else
        gpio.GPIO_Mode = GPIO_Mode_IPU;  

    GPIO_Init(GPIOD, &gpio);
}

void gpio_set(int pin)   { GPIO_SetBits(GPIOD, pin); }
void gpio_clear(int pin) { GPIO_ResetBits(GPIOD, pin); }

void gpio_toggle(int pin)
{
    if (GPIO_ReadOutputDataBit(GPIOD, pin))
        GPIO_ResetBits(GPIOD, pin);
    else
        GPIO_SetBits(GPIOD, pin);
}

int gpio_read(int pin)
{
    return GPIO_ReadInputDataBit(GPIOD, pin);
}
