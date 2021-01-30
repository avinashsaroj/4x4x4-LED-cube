
#include<avr/io.h>

#include<util/delay.h>



void main()

{

	

	DDRA=0xff;

	DDRB=0xff;

	DDRD=0xff;

	int i,j,k,l,m;

	while(1)

	{

		for(i=0;i<6;i++)

		{

			PORTD=~1;

			PORTA=0b00010001;

			PORTB=0b00010001;

			_delay_ms(200);

			

			PORTD=~2;

			PORTA=0b00010001;

			PORTB=0b00010001;

			_delay_ms(200);

			

			PORTD=~4;

			PORTA=0b00010001;

			PORTB=0b00010001;

			_delay_ms(200);

			

			PORTD=~8;

			PORTA=0b00010001;

			PORTB=0b00010001;

			_delay_ms(200);

			

			PORTD=~4;

			PORTA=0b00100010;

			PORTB=0b00100010;

			_delay_ms(200);

			

			PORTD=~2;

			PORTA=0b01000100;

			PORTB=0b01000100;

			_delay_ms(200);

			

			PORTD=~1;

			PORTA=0b10001000;

			PORTB=0b10001000;

			_delay_ms(200);

			

			PORTD=~2;

			PORTA=0b10001000;

			PORTB=0b10001000;

			_delay_ms(200);

			

			PORTD=~4;

			PORTA=0b10001000;

			PORTB=0b10001000;

			_delay_ms(200);

			

			PORTD=~8;

			PORTA=0b10001000;

			PORTB=0b10001000;

			_delay_ms(200);

			

			PORTD=~4;

			PORTA=0b01000100;

			PORTB=0b01000100;

			_delay_ms(200);

			

			PORTD=~2;

			PORTA=0b00100010;

			PORTB=0b00100010;

			_delay_ms(200);

			

		}

		for(j=0;j<6;j++)

		{

			PORTD=~8;

			PORTA=0b10011111;

			PORTB=0b11111001;

			_delay_ms(200);

			

			PORTD=~4;

			PORTA=0b10011111;

			PORTB=0b11111001;

			_delay_ms(200);

			

			PORTD=~2;

			PORTA=0b10011111;

			PORTB=0b11111001;

			_delay_ms(200);

			

			PORTD=~1;

			PORTA=0b10011111;

			PORTB=0b11111001;

			_delay_ms(200);

			

		}

		

		for(k=0;k<6;k++)

		{

			

			PORTD=~1;

			PORTA=~0b10011111;

			PORTB=~0b11111001;

			_delay_ms(200);

			

			PORTD=~2;

			PORTA=~0b10011111;

			PORTB=~0b11111001;

			_delay_ms(200);

			

			PORTD=~4;

			PORTA=~0b10011111;

			PORTB=~0b11111001;

			_delay_ms(200);

			

			PORTD=~8;

			PORTA=~0b10011111;

			PORTB=~0b11111001;

			_delay_ms(200);

			

			

			PORTD=~8;

			PORTA=0b10011111;

			PORTB=0b11111001;

			_delay_ms(200);

			

			PORTD=~4;

			PORTA=0b10011111;

			PORTB=0b11111001;

			_delay_ms(200);

			

			PORTD=~2;

			PORTA=0b10011111;

			PORTB=0b11111001;

			_delay_ms(200);

			

			PORTD=~1;

			PORTA=0b10011111;

			PORTB=0b11111001;

			_delay_ms(200);

			

			

		}

		

		for(l=0;l<6;l++)

		{

			PORTD=~1;

			PORTA=1;_delay_ms(100);

			PORTD=~2;

			PORTA=0b00100000;_delay_ms(100);PORTA=0;

			PORTD=~4;

			PORTB=0b00000100;_delay_ms(100);

			PORTD=~8;

			PORTB=0b10000000;_delay_ms(100);

			PORTD=~4;

			PORTB=0b00001000;_delay_ms(100);PORTB=0;

			PORTD=~2;

			PORTA=0b10000000;_delay_ms(100);

			PORTD=~1;

			PORTA=0b00001000;_delay_ms(100);

			PORTD=~2;

			PORTA=0b01000000;_delay_ms(100);PORTA=0;

			PORTD=~4;

			PORTB=0b00000010;_delay_ms(100);

			PORTD=~8;

			PORTB=0b00010000;_delay_ms(100);

			PORTD=~4;

			PORTB=0b00000001;_delay_ms(100);PORTB=0;

			PORTD=~2;

			PORTA=0b00010000;_delay_ms(100);

			

		}

		

		for(m=0;m<10000;m++)

		{

			PORTD=~1;

			PORTA=0b10011111;

			PORTB=0b11111001;

			_delay_us(100);

			PORTD=~2;

			PORTA=0b00001001;

			PORTB=0b10010000;

			_delay_us(100);

			PORTD=~4;

			PORTA=0b00001001;

			PORTB=0b10010000;

			_delay_us(100);

			PORTD=~8;

			PORTA=0b10011111;

			PORTB=0b11111001;

			_delay_us(100);

			

			

			

			

			

		}

	}

}

