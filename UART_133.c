#include "lpc1768_Includes.h"
int main()
{
	int i=0;
	char a[]="MITAOE";
    PINSEL0=0x00000050;
	U0FCR=0X07;
	U0LCR=0X80;

	U0DLL=0X75;
	U0DLM=0X00;
	U0LCR=0X03;
	U0TER=0X80;

	for(i=0;i<sizeof(a);i++)
	{
     while(!(U0LSR & 0X20));
	 U0THR=a[i];
	}

}