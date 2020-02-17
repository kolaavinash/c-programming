#include<stdio.h>
int main()
{
	int num,count=0,rem=0,sum=0;
	printf("Enter any number:");
	scanf("%d",&num);
	while(num!=0)
	{
		printf("Enter any number:");
		scanf("%d",&num);
		sum+=num;
	}
	
	printf("The sum of digits of the given number is:%d\n",sum);
}
