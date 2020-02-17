#include<stdio.h>
int main()
{
int i=1,a,d=0,w=0;
printf("enter amount:");
while(i<=5)
{
scanf("%d",&a);
if(a>0)
{d+=a;
i++;}
if(a<0)
{a=-a;
w+=a;}
}
printf("deposits is:%d\n",d);
printf("withdrawls is:%d\n",w);
}
