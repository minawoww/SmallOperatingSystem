/*
 * SOS.c
 *
 * Created: 10/22/2019 2:03:42 PM
 * Author : minam
 */ 


#include "SOS.h"
#include "DIO.h"



void FirstTask (void)
{
	DDRB |=(1<<0);
	PORTB^=(1<<0);
}

void SecondTask (void)
{
	DDRB |= (1<<1);
	PORTB^=(1<<1);
}

void ThirdTask(void)
{
	DDRB |= (1<<4);
	PORTB ^= (1<<4);
}

void ForthTask(void){
	
	DDRB |= (1<<5);
	PORTB ^= (1<<5);
}

void FifthTask(void){
	DDRB |= (1<<6);
	PORTB ^= (1<<6);
	
}

void SixthTask(void){
	DDRB |= (1<<7);
	PORTB ^= (1<<7);
}

void SeventhTask(void){
	DDRB |= (1<<7);
	PORTB ^= (1<<7);
}




int main(void)
{

	SOS_Init();	
	
    StrTask_t Task1 = {FirstTask, 0, 1000};
	StrTask_t Task2 = {SecondTask, 0, 2000};
	StrTask_t Task3 = {ThirdTask, 1, 4000};
	StrTask_t Task4 = {ForthTask, 1, 10000};
	StrTask_t Task5 = {FifthTask, 0, 2000};
	StrTask_t Task6 = {SixthTask, 0, 1000};
	
	
	 SOS_CreateTask(&Task1);
	 SOS_CreateTask(&Task2);
	 SOS_CreateTask(&Task3);
	 SOS_CreateTask(&Task4);
	 SOS_CreateTask(&Task5);
	 SOS_CreateTask(&Task6);
		
	SOS_Scheduler();

}

