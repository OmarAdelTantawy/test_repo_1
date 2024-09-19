/*
 * main.c
 *
 *  Created on: Sep 19, 2024
 *      Author: 1
 */
#include<avr/io.h>
#include<util/delay.h>
int main()
{
	DDRA = 0b00011111 ;

	while(1)
	{
		/*
		PORTA = 0b00000001 ;
			_delay_ms(1000);
			PORTA = 0b00000000 ;
			_delay_ms(1000);
			*/
		for(int i=0 ; i<5 ; i++){
	PORTA =0b00000001;
	_delay_ms(200);
	PORTA =0b00000010;
		_delay_ms(200);
		PORTA =0b00000100;
			_delay_ms(200);
			PORTA =0b00001000;
				_delay_ms(200);
		}
	}
}
