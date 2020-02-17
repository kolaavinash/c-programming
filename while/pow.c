#include<stdio.h>
int main()
{
int a,n,pow=1;
printf("enter a and n values:");
scanf("%d%d",&a,&n);
while(n!=0)
{
pow*=a;
n--;
}
printf("a power of n is:%d\n",pow);
}
