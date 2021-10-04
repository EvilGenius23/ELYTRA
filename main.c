#include <LPC214X.H>
#include "elitra.h"



  void delay(int t);
 void main(void)

{
IO0DIR=0X01;

while(1)
{
while( !IO0PIN % (1<<1));
 


	 }
	 void delay(int t)
	 {
	 int i,j;
	 for(i=0;i<100;i++)
	 for(j=0;j<t;j++);
	 }