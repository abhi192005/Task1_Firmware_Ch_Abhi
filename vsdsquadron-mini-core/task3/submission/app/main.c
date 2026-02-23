#include <ch32v00x.h>
#include <debug.h>
#include "gpio.h"

#define LED_PIN    GPIO_Pin_6   // PD6 onboard LED
#define BUTTON_PIN GPIO_Pin_0   // PD0 external button

void NMI_Handler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
void HardFault_Handler(void) __attribute__((interrupt("WCH-Interrupt-fast")));

int main(void)
{
    SystemCoreClockUpdate();
    Delay_Init();
    USART_Printf_Init(115200);

    printf("GPIO Button Toggle Demo Started\r\n");

    /* Initialize GPIOs using library */
    gpio_init(LED_PIN, GPIO_OUTPUT);
    gpio_init(BUTTON_PIN, GPIO_INPUT);

    

    while (1)
    {
        /* Button pressed (active low) */
        if (gpio_read(BUTTON_PIN) == 0)
        {
            gpio_toggle(LED_PIN);   // toggle software state

           
              // simple debounce
        }
        else
            gpio_clear(LED_PIN);
    }
}

void NMI_Handler(void) {}

void HardFault_Handler(void)
{
    while (1);
}
