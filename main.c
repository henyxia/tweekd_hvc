#include <avr/io.h>
#include <util/delay.h>

#define CPU_FREQ    16000000L
#define	VAL25		895
#define	VAL105		246

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
	DDRC = 0x00;
	DDRB &= 0xFE;
	PORTD |= 0x3C;
}

int analogRead(uint8_t pin)
{
        uint8_t low, high;

        if (pin >= 14)
			pin -= 14; // allow for channel or pin numbers
        ADMUX = (0x01 << 6) | (pin & 0x07);
		ADCSRA|=(1<<ADSC);
        while (bit_is_set(ADCSRA, ADSC));
        low  = ADCL;
        high = ADCH;

        return (high << 8) | low;
}

void ad_init(unsigned char channel)   
{   
	ADCSRA|=(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0);   
	ADMUX|=(1<<REFS0)|(1<<ADLAR);
	ADMUX=(ADMUX&0xf0)|channel;   
	ADCSRA|=(1<<ADEN);
}   

int main(void)
{
	init_serial(19200);
	port_initio();
	ad_init(PINC&0x00);
	uint8_t	opto0 = 0;
	uint8_t	opto1 = 0;
	unsigned char ser;
	unsigned int temp;
	unsigned char ftemp;

	while (1)
	{
		temp = analogRead(0);
		if(temp > VAL25)
			ftemp = 0;
		else if(temp < VAL105)
		{
			ftemp = 255;
			opto1 = 0;
		}
		else
		{
			temp = (VAL25 - temp) * 255;
			ftemp = temp / (VAL25 - VAL105);
		}
		if((opto0 == 1) && ((PIND & 0x40) == 0x40))
			PORTD &= 0xE7;
		else
			PORTD |= 0x18;
		if((opto1 == 1) && ((PIND & 0x80) == 0x80))
			PORTD &= 0xDB;
		else
			PORTD |= 0x24;

		ser = get_serial();
		if(ser == 'B')
			opto0 = 1;
		else if(ser == 'D')
			opto0 = 0;
		else if(ser == 'E')
			opto1 = 1;
		else if(ser == 'G')
			opto1 = 0;
		else if(ser == 'H')
			send_serial(ftemp);
		else if(ser == 'F')
		{
			if((PINB & 0x01) == 0x01)
				send_serial('I');
			else
				send_serial('K');
		}
		else
			send_serial('J');
	}

	return 0;
}
