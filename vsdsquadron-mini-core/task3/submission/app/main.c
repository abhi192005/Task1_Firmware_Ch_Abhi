#include <ch32v00x.h>
#include <debug.h>
#include "gpio.h"

#define LED_PIN     GPIO_Pin_6  // PD6 LED
#define BUTTON_PIN  GPIO_Pin_0  // PD0 Button

void NMI_Handler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
void HardFault_Handler(void) __attribute__((interrupt("WCH-Interrupt-fast")));

int main(void) {
    SystemCoreClockUpdate();
    Delay_Init();
    USART_Printf_Init(115200);

    gpio_init(LED_PIN, GPIO_OUTPUT);
    gpio_init(BUTTON_PIN, GPIO_INPUT);

    printf("=== Task-3 Option-1: Advanced GPIO Demo ===\r\n");
    printf("PD0 Button -> Toggle PD6 LED\r\n");
    printf("Press button 10x for evidence logs\r\n");

    while (1) {
        if (gpio_read_debounced(BUTTON_PIN)) {
            gpio_toggle(LED_PIN);
            printf("LED TOGGLED: PD6=%s | Button=PD0\r\n", 
                   gpio_read(LED_PIN) ? "ON " : "OFF");
        }
    }
}

void NMI_Handler(void) {}
void HardFault_Handler(void) { while (1); }
