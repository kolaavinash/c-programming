#include<stdio.h>
int main()
{
int a,b,c=0,d,e;
printf("enter 2 numbers:");
scanf("%d%d",&a,&b);
d=a;
e=b;
if(a<0)
a=-a;
if(b<0)
b=-b;
while(a>=b)
{
a-=b;
c++;
}
if(d>0&&e<0||d<0&&e>0)
c=-c;
printf("quotient is:%d\n",c);
printf("remainder is:%d\n",a);
}
