/*
 * Test01.c
 *
 * Created: 2024-10-02 오후 4:10:16
 * Author : user
 */ 

#define F_CPU 16000000L // ATmega128 이 동작하는 클록 주파수 정의 16MHz
#include <avr/io.h> // AVR 기본 헤더
#include <stdio.h>
#include <util/delay.h> // 시간 지연을 위한 함수 선언 
// LED Port : PG4 (PORTG 4)

int main(void)
{
    /* Replace with your application code */
	//	printf("Hello world"); -> 콘솔 명령어이므로 사용X
	DDRG |= 0x10; // xxxx xxxx == 0001 0000 (PG4 이므로 0~4가 LSB 부터 채워짐) : 1=출력 0=입력 (ㅣ 추가 -> 해당 포트만 보겠다 / 다른 곳은 원래 있던 값 유지)
    while (1) 
    {
		PORTG |= 0x01;
    }
}

