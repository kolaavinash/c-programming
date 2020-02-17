#include<stdio.h>
int main(void)
{
	int num;
	printf("Enter a 4 digit number:");
	scanf("%d",&num);
	printf("%d\n",num%10);
	num=num/10;
	printf("%d\n",num%10);
	num=num/10;
	printf("%d\n",num%10);
	num=num/10;
	printf("%d\n",num%10);
}
