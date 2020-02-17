#include<stdio.h>
int main()
{
	int num,n,rem,arm=0;
	printf("Enter any number:");
	scanf("%d",&num);
	n=num;
	while(num!=0)
	{
		rem=num%10;
		arm=arm+rem*rem*rem;
		num=num/10;
	}
	if(n==arm)
	printf("number is armstrong\n");
	else
	printf("not an armstrong number\n");
}
