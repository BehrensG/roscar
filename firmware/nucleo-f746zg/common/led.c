#include "led.h"
#include "pin.h"

#define PORTG_LED 12

void led_init()
{
  pin_set_output(GPIOG, PORTG_LED, 1);
}

void led_on()
{
  pin_set_output_state(GPIOG, PORTG_LED, 0);
}

void led_off()
{
  pin_set_output_state(GPIOG, PORTG_LED, 1);
}

void led_toggle()
{
  GPIOG->ODR ^= 1 << PORTG_LED;
}

