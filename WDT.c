#include "LPC1768_Includes.h"

int delay(int x)
{
   while(x--);
  }

int main()
{
   FIO0DIR=0x03;
   WDTC=0x0000FFFF;
   WDMOD=0x00000003;
   WDFEED=0x000000AA;
   WDFEED=0x00000055;
   while(1)
   {
    FIO0SET=0x03;
    delay(50000);
    FIO0CLR=0x03;
    delay(50000);
    while(1);
   }

}