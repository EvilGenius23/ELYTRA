//#include<elitra.h>

#include <LPC214X.H>
////////////////////////////
const int   INPUT  =  0;
const int   OUTPUT =  1;
const int   HIGH   =  1;
const int   LOW    =  0;
const int   true   =  1;
const int   false  =  0;
////////////////////////////

void pinMode(int pin , int pm)
{
	if(pin < 31 || pin ==31 )
	{
	   IO0DIR=(pm<<pin);

	 }
    else if(pin>32)
	 {
	   IO1DIR=(pm<<pin);
	 }
}
 ////////////////////////////////

void digitalWrite(int pin , int pm)
{
	if(pin < 31 || pin ==31 )
  {
	switch(pm)
	{
	 case 0:  IO0CLR=(1<<pin);
	 break;
	 case 1: IO0SET=(1<<pin);
	 break;
	}
  }
    else if(pin>32)
	{
	   switch(pm)
	{
	 case 0 :  IO1CLR=(1<<pin);
	 break;
	 case 1: IO1SET=(1<<pin);
	 break;
	 }
	 }
}
/////////////////////////////////
int digitalRead(int pin)
{

if(pin < 31 || pin ==31 )
{
	 if(!(IO0PIN & (1<<pin)))
	 return 1;
 }
    else if(pin>32)
{
	   if(!(IO1PIN & (1<<pin)))
	   return 1;
}
}
//////////////////////////////////	  