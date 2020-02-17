#include<stdio.h>
int main()
{
int n,c=0,rem;
printf("Enter any number:");
scanf("%d",&n);
while(n>0)
{
rem=n%10;
c++;
n=n/10;
}
printf("no of times digit occured is:%d\n",c);
}
