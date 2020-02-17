#include<stdio.h>
int main()
{
int i=1,count=0,j=1;
printf("prime numbers between 1 to 99 are:");
while(i<100)
{
while(j<=i)
{
if(i%j==0)
count++;
if(count==0)
printf("%d\t",i);
j++;
}
i++;
}
}
