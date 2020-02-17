#include<stdio.h>
#define isleap(y) ((y%100!=0 && y%4==0)||(y%400==0))?1:0
int main()
{
	int d,m,y,f=0;
	printf("enter date,month and year:");
	scanf("%d-%d-%d",&d,&m,&y);
	if(y>=1000&&y<=9999)
	{
		if(m>=1&&m<=12)
		{
			if((d==29) && (m==2) &&isleap(y))
				 f=1;
			else if((d>=1&&d<=30) && m==4||m==6||m==9||m==11)
			        f=1;
			else if((d>=1&&d<=31) && (m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12))
				f=1;
			else if((d>=1&&d<=28)&&(m==2))
				f=1;
		}
	}
	if(f==1)
		printf("Date is valid\n");
	else
		printf("Date is invalid\n");
}






