#include<stdio.h>
int main()
{
int i=1,a,d=0,w=0,n;
printf("enter no of account holders:");
scanf("%d",&n);
printf("enter amount:");
while(i<=n)
{
scanf("%d",&a);
if(a>0)
d+=a;
if(a<0)
{
a=-a;
w+=a;
}
i++;
}
printf("deposits is:%d\n",d);
printf("withdrawls is:%d\n",w);
}
