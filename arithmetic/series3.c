#include<stdio.h>
int main(void)
{
	int num;
	printf("Enter a 4 digit number:");
	scanf("%d",&num);
	printf("%d\n",num/1000);
	printf("%d\n",num/100);
	printf("%d\n",num/10);
	printf("%d\n",num);
}
