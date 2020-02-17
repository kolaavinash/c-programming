#include<stdio.h>
int main()
{
	int num;
	long f=1;
	printf("Enter any number:");
	scanf("%d",&num);
	if(num<0)
	printf("no factorial for negative numbers:");
	else
	{	while(num>0)
		{
		f=f*num;
		num--;
		}
	printf("The factorial of the given number is:%ld\n",f);
	}
}
