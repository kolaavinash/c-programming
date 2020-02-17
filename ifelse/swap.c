#include<stdio.h>
int main()
{
int a,b;
printf("Enter values of a and b:");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("value of a is:%d\n",a);
printf("value of b is:%d\n",b);
}
