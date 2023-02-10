/*
 * Polling1st.cpp
 *
 * Created: 2/10/2023 2:25:19 PM
 * Author : minol
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>


int main(void)
{
	
	DDRD =DDRD & 0b11111011;
	DDRB = DDRB|0b00000001;
	PORTD =PORTD| 0b00000100;

    while (1) 
    {

		if ((PIND & 0b00000100) == 0)
		{
			_delay_ms(1000);
			PORTB =PORTB ^ 0x01;
			

		}
    }
}

