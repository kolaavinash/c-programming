#include<stdio.h>
int main()
{
int a,b;
char c,ch;
do
{
printf("enter a and b values:");
scanf("%d%d",&a,&b);
printf("enter arithmetic operator:");
scanf(" %c",&c);
switch(c)
{
case '+':printf("%d\n",a+b);break;
case '-':printf("%d\n",a-b);break;
case '*':printf("%d\n",a*b);break;
case '/':printf("%d\n",a/b);break;
case '%':printf("%d\n",a%b);break;
default:printf("enter arithmetic operators only\n");break;
}
printf("do you want to continue or not(y/n):");
scanf(" %c",&ch);
}
while(ch=='y');

}
