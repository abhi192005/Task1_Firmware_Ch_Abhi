#include <debug.h>
#include "timer.h"

void timer_init(void)
{
    Delay_Init();
}

void timer_delay_ms(uint32_t ms)
{
    Delay_Ms(500);
}
