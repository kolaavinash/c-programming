#include<stdio.h>
int main()
{
int n,i,rem=0,sum=0;
printf("Enter any number:");
scanf("%d",&n);
do
{
while(n!=0)
{
rem=n%10;
sum=sum+rem; 
n=n/10;
}
n=sum;
sum=0;
}
while(n>9);
printf("The sum of digits of the given number is:%d\n",n);
}
