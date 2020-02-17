#include<stdio.h>
int main()
{
int a,b,c,mul=0;
printf("enter a and b values:");
scanf("%d%d",&a,&b);
c=b;
if(b<0)
b=-b;
while(b!=0)
{
mul+=a;
b--;
}
if(c<0)
mul=-mul;
printf("product is:%d\n",mul);
}
