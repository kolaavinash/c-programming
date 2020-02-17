#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter 2 numbers:");
	scanf("%d%d",&a,&b);
switch(a>b)
{
case 1:printf("a is big\n");
	break;
case 0:printf("b is big\n");
	break;
default:;
	break;
}
}
	
