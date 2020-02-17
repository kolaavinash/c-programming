#include<stdio.h>
int main()
{
int a,d=0,w=0,sum=1;
printf("enter amount:");
while(sum!=0)
{
scanf("%d",&a);
if(a>0)
d+=a;
if(a<0)
w+=a;
sum=d+w;
}
printf("sum is:%d",sum);
}
