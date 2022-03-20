#include "LPC1768_Includes.h"

int main(void)

{

int i=0;

PINSEL4=0x00000000;

FIO2DIR=0x000000FF;

while (1)
{

FIO2SET=0x000000FF; 

for(i=0;i<1000000;i++);

FIO2CLR=0x000000FF;

for(i=0;i<1000000;i++);
}
}