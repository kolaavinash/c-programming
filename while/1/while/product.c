#include<stdio.h>
int main()
{
	int num,rem,p=1;
	printf("Enter any number:");
	scanf("%d",&num);
	if(!num)
	p=0;
	else
		while(num>0)
		{
		rem=num%10;
		p=p*rem;
		num=num/10;
		}
	printf("The product of digits is:%d\n",p);
}
