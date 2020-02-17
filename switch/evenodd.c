#include<stdio.h>
int main()
{
int num;
printf("Enter a numbers:");
scanf("%d",&num);
switch(num%2)
{
case 0:printf("number is even\n");
	break;
default:printf("number is odd\n");
	break;
}
}
	
