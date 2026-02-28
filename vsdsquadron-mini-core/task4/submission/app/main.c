#include <ch32v00x.h>
#include <debug.h>
#include "gpio.h"
#include "timer.h"
#include "uart.h"

#define LED_PIN GPIO_Pin_4 // Connect external LED to PD4

int main(void) {
    SystemCoreClockUpdate();
    timer_init();
    uart_init(115200); 
    
    gpio_init(LED_PIN, GPIO_OUTPUT);
    
    char mode = '0';
    uint32_t counter = 0;

    printf("\r\n--- 115200 BAUD MODE MACHINE ---\r\n");
    printf("Send 0:OFF, 1:SLOW, 2:FAST, 3:ON\r\n");

    while (1) {
        if (uart_available()) {
            mode = uart_read();
            printf("Command Received: %c\r\n", mode);
        }

        switch (mode) {
            case '0': gpio_clear(LED_PIN); break;
            case '1': if (counter % 50 == 0) gpio_toggle(LED_PIN); break;
            case '2': if (counter % 10 == 0) gpio_toggle(LED_PIN); break;
            case '3': gpio_set(LED_PIN); break;
        }

        timer_delay_ms(10); 
        counter++;
        if(counter >= 100) counter = 0;
    }
}
