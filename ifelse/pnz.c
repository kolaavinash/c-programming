#include<stdio.h>
int main()
{
	int num;
	printf("ENter a numbers:");
	scanf("%d",&num);
	if(num>0)
		printf("number is positive\n");
	else if(num<0)
		printf("number is negative\n");
	else
	printf("number is zero\n");
}
	
