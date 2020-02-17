#include<stdio.h>
int main()
{
int d,m,y,f=0;
printf("enter date,month and year:");
scanf("%d-%d-%d",&d,&m,&y);
if(y>=1900&&y<2200)
{
if(m==2)
{	if(y%100!=0&&y%4==0||y%400==0)
	f=1;
	else
	f=0;
}
else if(m==4||m==6||m==9||m==11)
	{if(d>0&&d<31)
	f=1;}
else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
	if(d>0&&d<32)
	f=1;
if(m==2&&d<30)
f=1;
}
if(f==1)
printf("Date is valid\n");
else
printf("Date is invalid\n");
}


