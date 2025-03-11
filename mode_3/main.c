#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>
#define n asm volatile("nop");

void LED_Init() {
	DDRB |= (1 << PB1);
}

void LED_FF() {
	PORTB |= (1<<(PORTB1));//T1H  11    (687.5ns)  8bit FF
	n n n n n n n n n
	PORTB &= ~(1<<(PORTB1));//T1L  9     (562.5ns)
	n n n n n n n
	PORTB |= (1<<(PORTB1));//T1H  11    (687.5ns)
	n n n n n n n n n
	PORTB &= ~(1<<(PORTB1));//T1L  9     (562.5ns)
	n n n n n n n
	PORTB |= (1<<(PORTB1));//T1H  11    (687.5ns)
	n n n n n n n n n
	PORTB &= ~(1<<(PORTB1));//T1L  9     (562.5ns)
	n n n n n n n
	PORTB |= (1<<(PORTB1));//T1H  11    (687.5ns)
	n n n n n n n n n
	PORTB &= ~(1<<(PORTB1));//T1L  9     (562.5ns)
	n n n n n n n
	PORTB |= (1<<(PORTB1));//T1H  11    (687.5ns)
	n n n n n n n n n
	PORTB &= ~(1<<(PORTB1));//T1L  9     (562.5ns)
	n n n n n n n
	PORTB |= (1<<(PORTB1));//T1H  11    (687.5ns)
	n n n n n n n n n
	PORTB &= ~(1<<(PORTB1));//T1L  9     (562.5ns)
	n n n n n n n
	PORTB |= (1<<(PORTB1));//T1H  11    (687.5ns)
	n n n n n n n n n
	PORTB &= ~(1<<(PORTB1));//T1L  9     (562.5ns)
	n n n n n n n
	PORTB |= (1<<(PORTB1));//T1H  11    (687.5ns)
	n n n n n n n n n
	PORTB &= ~(1<<(PORTB1));//T1L  9     (562.5ns)
	n n n n n n n
}


void LED_00() {
	PORTB |= (1<<(PORTB1));//T0H  5     (312.5ns) 8bit 00
	n n n
	PORTB &= ~(1<<(PORTB1));//T0L  15    (937.5ns)
	n n n n n n n n n n n n n
	PORTB |= (1<<(PORTB1));//T0H  5     (312.5ns)
	n n n
	PORTB &= ~(1<<(PORTB1));//T0L  15    (937.5ns)
	n n n n n n n n n n n n n
	PORTB |= (1<<(PORTB1));//T0H  5     (312.5ns)
	n n n
	PORTB &= ~(1<<(PORTB1));//T0L  15    (937.5ns)
	n n n n n n n n n n n n n
	PORTB |= (1<<(PORTB1));//T0H  5     (312.5ns)
	n n n
	PORTB &= ~(1<<(PORTB1));//T0L  15    (937.5ns)
	n n n n n n n n n n n n n
	PORTB |= (1<<(PORTB1));//T0H  5     (312.5ns)
	n n n
	PORTB &= ~(1<<(PORTB1));//T0L  15    (937.5ns)
	n n n n n n n n n n n n n
	PORTB |= (1<<(PORTB1));//T0H  5     (312.5ns)
	n n n
	PORTB &= ~(1<<(PORTB1));//T0L  15    (937.5ns)
	n n n n n n n n n n n n n
	PORTB |= (1<<(PORTB1));//T0H  5     (312.5ns)
	n n n
	PORTB &= ~(1<<(PORTB1));//T0L  15    (937.5ns)
	n n n n n n n n n n n n n
	PORTB |= (1<<(PORTB1));//T0H  5     (312.5ns)
	n n n
	PORTB &= ~(1<<(PORTB1));//T0L  15    (937.5ns)
	n n n n n n n n n n n n n
}

void LED_07() {
	PORTB |= (1<<(PORTB1));//T0H  5     (312.5ns) 8bit 00
	n n n
	PORTB &= ~(1<<(PORTB1));//T0L  15    (937.5ns)
	n n n n n n n n n n n n n
	PORTB |= (1<<(PORTB1));//T0H  5     (312.5ns)
	n n n
	PORTB &= ~(1<<(PORTB1));//T0L  15    (937.5ns)
	n n n n n n n n n n n n n
	PORTB |= (1<<(PORTB1));//T0H  5     (312.5ns)
	n n n
	PORTB &= ~(1<<(PORTB1));//T0L  15    (937.5ns)
	n n n n n n n n n n n n n
	PORTB |= (1<<(PORTB1));//T0H  5     (312.5ns)
	n n n
	PORTB &= ~(1<<(PORTB1));//T0L  15    (937.5ns)
	n n n n n n n n n n n n n
	PORTB |= (1<<(PORTB1));//T0H  5     (312.5ns)
	n n n
	PORTB &= ~(1<<(PORTB1));//T0L  15    (937.5ns)
	n n n n n n n n n n n n n
	PORTB |= (1<<(PORTB1));//T1H  11    (687.5ns)
	n n n n n n n n n
	PORTB &= ~(1<<(PORTB1));//T1L  9     (562.5ns)
	n n n n n n n
	PORTB |= (1<<(PORTB1));//T1H  11    (687.5ns)
	n n n n n n n n n
	PORTB &= ~(1<<(PORTB1));//T1L  9     (562.5ns)
	n n n n n n n
	PORTB |= (1<<(PORTB1));//T1H  11    (687.5ns)
	n n n n n n n n n
	PORTB &= ~(1<<(PORTB1));//T1L  9     (562.5ns)
	n n n n n n n
}


int main(void)
{

	LED_Init();
	

	while(1)
	{	

			LED_07();//GREEN
			LED_00();
			LED_00();
			LED_00();//red
			LED_07();
			LED_00();
			LED_00();//blue
			LED_00();
			LED_07();
			LED_07();//GREEN
			LED_00();
			LED_00();
			LED_00();//red
			LED_07();
			LED_00();
			LED_00();//blue
			LED_00();
			LED_07();
			LED_07();//GREEN
			LED_00();
			LED_00();
			LED_00();//red
			LED_07();
			LED_00();
			LED_00();//blue
			LED_00();
			LED_07();
			LED_07();//GREEN
			LED_00();
			LED_00();
			LED_00();//red
			LED_07();
			LED_00();
			LED_00();//blue
			LED_00();
			LED_07();
			LED_07();//GREEN
			LED_00();
			LED_00();
			LED_00();//red
			LED_07();
			LED_00();
			LED_00();//blue
			LED_00();
			LED_07();
			LED_07();//GREEN
			LED_00();
			LED_00();
			
			_delay_ms(2000);
			
						LED_00();//GREEN
						LED_07();
						LED_00();
						LED_00();//red
						LED_00();
						LED_07();
						LED_07();//blue
						LED_00();
						LED_00();
						LED_00();//GREEN
						LED_07();
						LED_00();
						LED_00();//red
						LED_00();
						LED_07();
						LED_07();//blue
						LED_00();
						LED_00();
						LED_00();//GREEN
						LED_07();
						LED_00();
						LED_00();//red
						LED_00();
						LED_07();
						LED_07();//blue
						LED_00();
						LED_00();
						LED_00();//GREEN
						LED_07();
						LED_00();
						LED_00();//red
						LED_00();
						LED_07();
						LED_07();//blue
						LED_00();
						LED_00();
						LED_00();//GREEN
						LED_07();
						LED_00();
						LED_00();//red
						LED_00();
						LED_07();
						LED_07();//blue
						LED_00();
						LED_00();
						LED_00();//GREEN
						LED_07();
						LED_00();
						
						_delay_ms(2000);
						
												LED_07();
												LED_07();//w
												LED_07();
												LED_07();
												LED_07();//w
												LED_07();											
												LED_07();
												LED_07();//w
												LED_07();																
												LED_07();
												LED_07();//w
												LED_07();
												LED_07();
												LED_07();//w
												LED_07();
												LED_07();
												LED_07();//w
												LED_07();
												LED_07();
												LED_07();//w
												LED_07();
												LED_07();
												LED_07();//w
												LED_07();
												LED_07();
												LED_07();//w
												LED_07();
												LED_07();
												LED_07();//w
												LED_07();
												LED_07();
												LED_07();//w
												LED_07();
												LED_07();
												LED_07();//w
												LED_07();
												LED_07();
												LED_07();//w
												LED_07();
												LED_07();
												LED_07();//w
												LED_07();
												LED_07();
												LED_07();//w
												LED_07();
												LED_07();
												LED_07();//w
												LED_07();





									
_delay_ms(2000);
	}
}



