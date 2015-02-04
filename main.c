#include <avr/io.h>
#include <util/delay.h>

#define CPU_FREQ        16000000L

unsigned int joystick_lr;
unsigned int joystick_ud;

void init_serial(unsigned long int speed)
{
	//UBRR0 = CPU_FREQ/((speed)<<4)-1;
	UBRR0 = 8;
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
	init_serial(250000);
	port_initio();
	uint8_t	opto0 = 0;
	uint8_t	opto2 = 0;
  
	while (1)
	{
		if((opto0 == 1) && ((PIND & 0x40) == 0x40))
			PORTD &= 0xE7;
		else
			PORTD |= 0x18;
		if((opto2 == 1) && ((PIND & 0x80) == 0x80))
			PORTD &= 0xDB;
		else
			PORTD |= 0x24;

		if((PINB & 0x01) == 0x01)
			send_serial('U');
		else
			send_serial('D');
	}

	return 0;
}
