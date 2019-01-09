#include<reg51.h>
void main()
{


//change1

//BAUD
TMOD=0X20;
TH1=0XFD;
TL1=0XFD;
TR1=1;
//seial
SM0=0;
SM1=1;
REN=1;
ES=1;
EA=1;
while(1);
}

void serial() interrupt 4
{      
	 if(RI==1)		
	{
	   P1=SBUF;
	   while(!RI);
	   RI=0;
}	 
}
