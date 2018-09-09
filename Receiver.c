#include <xc.h>
#define SENSOR_1 GPIObits.GP5
#define SENSOR_2 GPIObits.GP4
#define SENSOR_3 GPIObits.GP3
#define SENSOR_4 GPIObits.GP2
#define OUT_1 GPIObits.GP0
#define OUT_2 GPIObits.GP1

__CONFIG(MCLRE_OFF & CP_OFF & CPD_OFF & BOREN_OFF & WDTE_OFF & PWRTE_OFF & FOSC_INTRCIO); 

void main(void)
{
OPTION_REG=0b11010011;.
CMCON0=0b00000111;
ANSEL=0b00000000; 
ADCON0=0; 
TRISIO = 0b00111100; 
unsigned char x,y,z;
SENSOR_1=0;
SENSOR_2=0;
SENSOR_3=0;
SENSOR_4=0;
OUT_1=0;
OUT_2=0;
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
