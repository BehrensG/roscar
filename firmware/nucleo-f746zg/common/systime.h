#ifndef SYSTIME_H
#define SYSTIME_H

#include <stdint.h>
#include "stm32f746xx.h"

void systime_init();
#define SYSTIME (TIM2->CNT)

#endif

