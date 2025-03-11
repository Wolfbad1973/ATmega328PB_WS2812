avrdude -c usbasp -p m328pb -U flash:w:app.hex
timeout /t 5 /nobreak
