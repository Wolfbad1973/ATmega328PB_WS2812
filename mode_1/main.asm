.include "m328PBdef.inc"

.org 0
    sbi     DDRB, 0         ; Настройка PB0 как выхода


	;0 
;    sbi     PORTB, 0        ; Установить HIGH (2 цикла) 0
;	nop
;	nop
;	nop
;   cbi     PORTB, 0        ; Установить LOW (2 цикла)
;	nop
;	nop
;	nop
;	nop
;	nop
;	nop
;	nop
;	nop
;	nop
;	nop
;	nop		
;	nop
;	nop
	

	MainLoop:
	;1 
	sbi     PORTB, 0        ; Установить HIGH (2 цикла) 1
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
    cbi     PORTB, 0        ; Установить LOW (2 цикла)
	nop
	nop
	nop
	nop
	nop 
	;2
	sbi     PORTB, 0        ; Установить HIGH (2 цикла) 1
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
    cbi     PORTB, 0        ; Установить LOW (2 цикла)
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	;3
		sbi     PORTB, 0        ; Установить HIGH (2 цикла) 1
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
    cbi     PORTB, 0        ; Установить LOW (2 цикла)
	nop
	nop
	nop
	nop
	nop 
	;4
		sbi     PORTB, 0        ; Установить HIGH (2 цикла) 1
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
    cbi     PORTB, 0        ; Установить LOW (2 цикла)
	nop
	nop
	nop
	nop
	nop 
	;5
		sbi     PORTB, 0        ; Установить HIGH (2 цикла) 1
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
    cbi     PORTB, 0        ; Установить LOW (2 цикла)
	nop
	nop
	nop
	nop
	nop 
	;6
		sbi     PORTB, 0        ; Установить HIGH (2 цикла) 1
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
    cbi     PORTB, 0        ; Установить LOW (2 цикла)
	nop
	nop
	nop
	nop
	nop 
	;7
		sbi     PORTB, 0        ; Установить HIGH (2 цикла) 1
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
    cbi     PORTB, 0        ; Установить LOW (2 цикла)
	nop
	nop
	nop
	nop
	nop 
	;8
		sbi     PORTB, 0        ; Установить HIGH (2 цикла) 1
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
    cbi     PORTB, 0        ; Установить LOW (2 цикла)
	nop
	nop
	nop
	nop
	nop 
	nop
	nop
	;1 
	sbi     PORTB, 0        ; Установить HIGH (2 цикла) 1
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
    cbi     PORTB, 0        ; Установить LOW (2 цикла)
	nop
	nop
	nop
	nop
	nop 
	;2
	sbi     PORTB, 0        ; Установить HIGH (2 цикла) 1
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
    cbi     PORTB, 0        ; Установить LOW (2 цикла)
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	;3
		sbi     PORTB, 0        ; Установить HIGH (2 цикла) 1
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
    cbi     PORTB, 0        ; Установить LOW (2 цикла)
	nop
	nop
	nop
	nop
	nop 
	;4
		sbi     PORTB, 0        ; Установить HIGH (2 цикла) 1
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
    cbi     PORTB, 0        ; Установить LOW (2 цикла)
	nop
	nop
	nop
	nop
	nop 
	;5
		sbi     PORTB, 0        ; Установить HIGH (2 цикла) 1
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
    cbi     PORTB, 0        ; Установить LOW (2 цикла)
	nop
	nop
	nop
	nop
	nop 
	;6
		sbi     PORTB, 0        ; Установить HIGH (2 цикла) 1
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
    cbi     PORTB, 0        ; Установить LOW (2 цикла)
	nop
	nop
	nop
	nop
	nop 
	;7
		sbi     PORTB, 0        ; Установить HIGH (2 цикла) 1
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
    cbi     PORTB, 0        ; Установить LOW (2 цикла)
	nop
	nop
	nop
	nop
	nop 
	;8
		sbi     PORTB, 0        ; Установить HIGH (2 цикла) 1
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
    cbi     PORTB, 0        ; Установить LOW (2 цикла)
	nop
	nop
	nop
	nop
	nop 
	nop
	nop
	;1 
	sbi     PORTB, 0        ; Установить HIGH (2 цикла) 1
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
    cbi     PORTB, 0        ; Установить LOW (2 цикла)
	nop
	nop
	nop
	nop
	nop 
	;2
	sbi     PORTB, 0        ; Установить HIGH (2 цикла) 1
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
    cbi     PORTB, 0        ; Установить LOW (2 цикла)
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	;3
		sbi     PORTB, 0        ; Установить HIGH (2 цикла) 1
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
    cbi     PORTB, 0        ; Установить LOW (2 цикла)
	nop
	nop
	nop
	nop
	nop 
	;4
		sbi     PORTB, 0        ; Установить HIGH (2 цикла) 1
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
    cbi     PORTB, 0        ; Установить LOW (2 цикла)
	nop
	nop
	nop
	nop
	nop 
	;5
		sbi     PORTB, 0        ; Установить HIGH (2 цикла) 1
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
    cbi     PORTB, 0        ; Установить LOW (2 цикла)
	nop
	nop
	nop
	nop
	nop 
	;6
		sbi     PORTB, 0        ; Установить HIGH (2 цикла) 1
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
    cbi     PORTB, 0        ; Установить LOW (2 цикла)
	nop
	nop
	nop
	nop
	nop 
	;7
		sbi     PORTB, 0        ; Установить HIGH (2 цикла) 1
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
    cbi     PORTB, 0        ; Установить LOW (2 цикла)
	nop
	nop
	nop
	nop
	nop 
	;8
		sbi     PORTB, 0        ; Установить HIGH (2 цикла) 1
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
    cbi     PORTB, 0        ; Установить LOW (2 цикла)
	nop
	nop
	nop
	nop
	nop 
	nop
	nop
	;delay
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
    rjmp    MainLoop        ; Повторить цикл (2 цикла)