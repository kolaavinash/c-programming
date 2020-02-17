#include<stdio.h>
int main()
{
	int a,b;
	char ch;
	printf("Enter 2 numbers:");
	scanf("%d%d",&a,&b);
	printf("Enter a arithematic operator:");
	scanf(" %c",&ch);
	if(ch=='+')
	printf("addition of numbers is:%d\n",a+b);
	else if(ch=='-')
	printf("subtraction of numbers is:%d\n",a-b);
	else if(ch=='*')
	printf("multiplication of numbers is:%d\n",a*b);
	else if(ch=='/')
	printf("division of numbers is:%d\n",a/b);
	else if(ch=='%')
	printf("modulus of numbers is:%d\n",a%b);
}
