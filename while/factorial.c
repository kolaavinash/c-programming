#include<stdio.h>
int main()
{
	int n;
	long f=1;
	printf("Enter any number:");
	scanf("%d",&n);
	if(n<0)
	printf("no factorial for negative numbers:");
	else
	{	while(n>0)
		{
		f=f*n;
		n--;
		}
	printf("The factorial of the given number is:%ld\n",f);
	}
}
