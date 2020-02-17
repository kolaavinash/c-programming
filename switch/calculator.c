#include<stdio.h>
int main()
{
	int a,b;
	char ch;
	printf("Enter 2 numbers:");
	scanf("%d%d",&a,&b);
	printf("Enter a arithematic operator:");
	scanf(" %c",&ch);
switch(ch)
{
case '+':printf("addition of numbers is:%d\n",a+b);
	break;
case '-':printf("subtraction of numbers is:%d\n",a-b);
	break;
case '*':printf("multiplication of numbers is:%d\n",a*b);
	break;
case '/':printf("division of numbers is:%d\n",a/b);
	break;
case '%':printf("modulus of numbers is:%d\n",a%b);
	break;
default:printf("enter arithmetic operators only\n");
	break;
}
}
