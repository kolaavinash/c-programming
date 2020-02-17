#include<stdio.h>
int main()
{
int num=1000,n,rem,rev=0;
printf("palindrome numbers are:\n");
while(num<=9999)
{
n=num;
while(num!=0)
{ 
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
if(n==rev)
{printf("%d",rev);}
num++;
}
}
