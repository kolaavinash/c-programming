#include<stdio.h>
int main()
{
	int num,factor=1;
	printf("Enter any number:");
	scanf("%d",&num);
	printf("Factors of %d are:",num);
	while(factor<=num)
	{
	if(num%factor==0)
	{printf("%d\t",factor);}
	factor=factor+1;	
	}
}
