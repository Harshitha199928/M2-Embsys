#ifndef __AVR_ATmega328__
#define __AVR_ATmega328__
#endif

#include <avr/io.h>
#include<util/delay.h>
#include "display.h"
#include "lcd.h"
#define F_CPU 1600000UL

char dis()
{
        char Temp[20];
        char start[]="AirQuality_Level";
        TCCR1A|=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
        TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10);//choosing 64 as prescalar as a function oc clock
        DDRB|=(1<<PB1); //set portB
        lcd();
        if((ADC>=0) && (ADC<=209))
        {
           Clear_lcd();
           OCR1A=205;
           Temp[0] = 'O';
           Temp[1] = '2';
           Temp[2] = '=';
           Temp[3] = '9';
           Temp[4] = '9';
           Temp[5] = '%';
           Temp[6] = ' ';
           Temp[7] = ' ';
           Temp[8] = 'C';
           Temp[9] = 'O';
           Temp[10] = '2';
           Temp[11] = '=';
           Temp[12] = '1';
           Temp[13] = '%';
           Temp[14]=' ';
       
           Lcd_dis(start);
           Lcd_cmd(0xC0);
           Lcd_dis(Temp);
           _delay_ms(20);
           _delay_ms(200);
        }
        else if ((ADC>=210) && (ADC<=509))
        {
            Clear_lcd();
            OCR1A=410;
            Temp[0] = 'O';
            Temp[1] = '2';
            Temp[2] = '=';
            Temp[3] = '7';
            Temp[4] = '5';
            Temp[5] = '%';
            Temp[6] = ' ';
            Temp[7] = ' ';
            Temp[8] = 'C';
            Temp[9] = 'O';
            Temp[10] = '2';
            Temp[11] = '=';
            Temp[12] = '2';
            Temp[13] = '5';
            Temp[14] = '%';
           
        
           Lcd_dis(start);
           Lcd_cmd(0xC0);
           Lcd_dis(Temp);
           _delay_ms(200);
        }
        else if((ADC>=510) && (ADC<=709))
        {
           Clear_lcd();
           OCR1A=717;
           Temp[0] = 'O';
           Temp[1] = '2';
           Temp[2] = '=';
           Temp[3] = '5';
           Temp[4] = '0';
           Temp[5] = '%';
           Temp[6] = ' ';
           Temp[7] = ' ';
           Temp[8] = 'C';
           Temp[9] = 'O';
           Temp[10] = '2';
           Temp[11] = '=';
           Temp[12] = '5';
           Temp[13] = '0';
           Temp[14] = '%';
        
           Lcd_dis(start);
           Lcd_cmd(0xC0);
           Lcd_dis(Temp);
           _delay_ms(200);
        }
        else if((ADC>=710) && (ADC<=1024))
        {
          Clear_lcd();
          OCR1A=974;
          Temp[0] = 'O';
          Temp[1] = '2';
          Temp[2] = '=';
          Temp[3] = '2';
          Temp[4] = '5';
          Temp[5] = '%';
          Temp[6] = ' ';
          Temp[7] = ' ';
          Temp[8] = 'C';
          Temp[9] = 'O';
          Temp[10] = '2';
          Temp[11] = '=';
          Temp[12] = '7';
          Temp[13] = '5';
          Temp[12] = '%';
        
          Lcd_dis(start);
          Lcd_cmd(0xC0);
          Lcd_dis(Temp);
          _delay_ms(200);
        }

}

