#include<stdio.h>
int main()
{
	int num,rem=0,sum=0;
	printf("Enter any number:");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("The sum of digits of the given number is:%d\n",sum);
}
