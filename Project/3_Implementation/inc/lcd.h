#ifndef _lcd_h_
#define _lcd_h_
#include <util/delay.h>
#define LCD_DIRECTION  DDRB			/* Define LCD data port direction */
#define PORT_B PORTB			/* Define LCD data port */
#define LCD_RS PB2				/* Define Register Select pin */
#define LCD_EN PB3 				/* Define Enable signal pin */
void Lcd_cmd( unsigned char command );
void Lcd_charwise( unsigned char ch );
void Lcd_ini(void);
void Lcd_dis (char *temperature_value);
void Clear_lcd();

void lcd(void);
void InitADC(void);
uint16_t ReadADC(uint8_t ch);
#endif
