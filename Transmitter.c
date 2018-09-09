#include <xc.h>
__CONFIG( WDTE_OFF & PWRTE_ON & MCLRE_OFF & CP_OFF & BOREN_ON &  IESO_ON & FCMEN_ON);
void send1(void)
{
unsigned char x;
for (x=0;x<10;x++)
{
NOP();
NOP();
GPIO = 0b00110111;						
NOP();
NOP();
GPIO = 0b00000000;
}
}
void send0(void)
{
unsigned char x;
GPIO = 0b00000000;
for (x=0;x<10;x++){
NOP();
NOP();
}
}
void main(void)
{
unsigned char p;
OPTION_REG=0b01011000;
CMCON0=0b00000111;
ANSEL=0;
ADCON0=0;
TRISIO =00001000; 
while(1)
{
	for(p=0;p<45;p++)
	send1();
	for(p=0;p<45;p++)
	send0();
	;
 } 
}

 

while(1)
{
if(SENSOR_1==1 && SENSOR_2==1)
	{
	for(x=0;x<255;x++)
	for(y=0;y<200;y++)
	;					
	if(SENSOR_1==1 && SENSOR_2==1)
		{
		OUT_1=1;
		OUT_2=0;
		for(z=0;z<5;z++)
		for(x=0;x<255;x++)
		for(y=0;y<20;y++)
		{
		OUT_1=1;
		OUT_2=0;
		}
		OUT_1=0;
		OUT_2=0;
		while(SENSOR_3==0 && SENSOR_4==0); 
		while(SENSOR_1==1 && SENSOR_2==1); 
		while(SENSOR_3==1 && SENSOR_4==1); 
			for(x=0;x<255;x++)
			for(y=0;y<20;y++)
			;	
		while(SENSOR_3==1 && SENSOR_4==1); 
		OUT_1=0;
		OUT_2=1;
		for(z=0;z<5;z++)
		for(x=0;x<255;x++)
		for(y=0;y<20;y++)
		{
		OUT_1=0;
		OUT_2=1;
		}
		}
	}
		OUT_1=0;
		OUT_2=0;	
}
}
