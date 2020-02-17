#include<stdio.h>
int main()
{
int i=1,j,n;
printf("enter a number:");
scanf("%d",&n);
do
{
do
{
printf("*");
}
while(++j<=i);
j=1;
printf("\n");
}
while(++i<=n);
}
