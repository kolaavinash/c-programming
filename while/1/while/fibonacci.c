#include<stdio.h>
int main()
{
int n,n1=0,n2=1,n3,num;
printf("enter num to check palindrome or not:");
scanf("%d",&num);
printf("%d\t%d\t",n1,n2);
n3=n1+n2;
while(n3<100)
{
printf("%d\t",n3);
n1=n2;
n2=n3;
n3=n1+n2;
if(n3==num)
n=num;
}
if(n==num)
printf("\npalindrome number\n");
else
printf("\nnot a palindrome number\n");
}
