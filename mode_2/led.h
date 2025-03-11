/*
 * led.h
 *
 * Created: 10.02.2025 13:10:19
 *  Author: m.archipov
 */ 


#ifndef LED_H_
#define LED_H_

#include <avr/io.h>
#include <util/delay.h>
#include <led.c>
#include <main.c>



// ��������� �������
void led_Init(void);  // �������������
void led_FF(void);    // ��������
void led_00(void);   // ���������




#endif /* LED_H_ */