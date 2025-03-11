ren ws2812mode1.hex app.hex
cd C:\Users\m.archipov\avrdude
del app.hex
cd C:\Users\m.archipov\Documents\Atmel Studio\7.0\ws2812mode1\ws2812mode1\Debug
move app.hex C:\Users\m.archipov\avrdude
cd C:\Users\m.archipov\avrdude
make.bat
