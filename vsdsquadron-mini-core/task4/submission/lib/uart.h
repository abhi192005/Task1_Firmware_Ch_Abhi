#ifndef UART_H
#define UART_H
#include <ch32v00x.h>
#include <stdio.h>

void uart_init(uint32_t baudrate);
uint8_t uart_available(void);
char uart_read(void);
void uart_write(char ch);

#endif
