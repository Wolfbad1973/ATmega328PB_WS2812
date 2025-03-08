#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

#define LED_PIN     0       // Using PB0 (Pin 14 of ATmega328PB)
#define LED_PORT    PORTB
#define LED_DDR     DDRB

// Timing constants for 16MHz clock
#define T1H  11     // 1-bit high duration (687.5ns)
#define T1L  9      // 1-bit low duration (562.5ns)
#define T0H  5      // 0-bit high duration (312.5ns)
#define T0L  15     // 0-bit low duration (937.5ns)

void send_byte(uint8_t byte) {
	for (uint8_t mask = 0x80; mask; mask >>= 1) {
		if (byte & mask) {
			// Send '1' bit
			asm volatile(
			"sbi %[port], %[pin] \n\t"   // Set HIGH (2 cycles)
			".rept %[on] \n\t"           // High duration (T1H - 2)
			"nop \n\t"
			".endr \n\t"
			"cbi %[port], %[pin] \n\t"   // Set LOW (2 cycles)
			".rept %[off] \n\t"          // Low duration (T1L - 2)
			"nop \n\t"
			".endr \n\t"
			:: [port] "I" (_SFR_IO_ADDR(LED_PORT)),
			[pin]  "I" (LED_PIN),
			[on]   "I" (T1H - 2),
			[off]  "I" (T1L - 2)
			: "memory"
			);
			} else {
			// Send '0' bit
			asm volatile(
			"sbi %[port], %[pin] \n\t"   // Set HIGH (2 cycles)
			".rept %[on] \n\t"           // High duration (T0H - 2)
			"nop \n\t"
			".endr \n\t"
			"cbi %[port], %[pin] \n\t"   // Set LOW (2 cycles)
			".rept %[off] \n\t"          // Low duration (T0L - 2)
			"nop \n\t"
			".endr \n\t"
			:: [port] "I" (_SFR_IO_ADDR(LED_PORT)),
			[pin]  "I" (LED_PIN),
			[on]   "I" (T0H - 2),
			[off]  "I" (T0L - 2)
			: "memory"
			);
		}
	}
}

void send_color(uint8_t green, uint8_t red, uint8_t blue) {
	send_byte(green);
	send_byte(red);
	send_byte(blue);
	_delay_us(50);  // Reset signal (>50탎)
	send_byte(green);
	send_byte(red);
	send_byte(blue);
	_delay_us(50);  // Reset signal (>50탎)
	send_byte(green);
	send_byte(red);
	send_byte(blue);
	_delay_us(50);  // Reset signal (>50탎)
	send_byte(green);
	send_byte(red);
	send_byte(blue);
	_delay_us(50);  // Reset signal (>50탎)
}

int main(void) {
	LED_DDR |= (1 << LED_PIN);  // Set PB0 as output

	while (1) {
		// Test sequence: Red -> Green -> Blue -> White
		send_color(0, 255, 0);      // Red
		_delay_ms(500);
		send_color(255, 0, 0);      // Green
		_delay_ms(500);
		send_color(0, 0, 255);      // Blue
		_delay_ms(500);
		send_color(255, 255, 255);  // White
		_delay_ms(500);
	}
}
