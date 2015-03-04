#include <avr/io.h>
#include <util/delay.h>

#define CPU_FREQ        16000000L

unsigned int joystick_lr;
unsigned int joystick_ud;

void init_serial(int speed)
{
	UBRR0 = CPU_FREQ/(((unsigned long int)speed)<<4)-1;
	UCSR0B = (1<<TXEN0 | 1<<RXEN0);
	UCSR0C = (1<<UCSZ01 | 1<<UCSZ00);
	UCSR0A &= (1 << U2X0);
}

void send_serial(unsigned char c)
{
	loop_until_bit_is_set(UCSR0A, UDRE0);
	UDR0 = c;
}

unsigned char get_serial(void)
{
	loop_until_bit_is_set(UCSR0A, RXC0);
	return UDR0;
}

void port_initio(void)
{
	DDRD &= 0xFC;
	DDRD |= 0x3C;
	DDRB &= 0xFE;
	PORTD |= 0x3C;
}

int main(void)
{
	init_serial(19200);
	port_initio();
	unsigned char ser;
	uint8_t	opto0 = 0;
	uint8_t	opto1 = 0;
	uint8_t once = 1;
  
	while (1)
	{
		if((opto0 == 1) && ((PIND & 0x40) == 0x40))
		{
			if(once)
			{
				PORTD &= 0xE7;
				//_delay_ms(00000);
				//PORTD |= 0x18;
				//once = 0;
			}
		}
		else
		{
			once = 1;
			PORTD |= 0x18;
		}
		if((opto1 == 1) && ((PIND & 0x80) == 0x80))
			PORTD &= 0xDB;
		else
			PORTD |= 0x24;

		ser = get_serial();
		if(ser == 'B')
			opto0 = 1;
		else if(ser == 'D')
			opto0 = 0;
		send_serial(ser);
/*
		if((PINB & 0x01) == 0x01)
			send_serial('1');
		else
			send_serial('0');
		send_serial('\n');
*/
	}

	return 0;
}
