#include<stdio.h>
int main()
{
	int num,n,rem,rev=0;
	printf("Enter any number:");
	scanf("%d",&num);
	n=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(n==rev)
	printf("number is palindrome\n");
	else
	printf("not a palindrome number\n");
}
