#ifndef __AVR_ATmega328__
#define __AVR_ATmega328__
#endif
#include <avr/io.h>
#include"led.h"
#include"lcd.h"
#include"display.h"
#include<util/delay.h>
int main(void)
{
    Lcd_ini();
    while(1)
    {
        led(); 
        lcd(); 
        dis(); 
    }
  return 0;
}
