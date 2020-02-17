#include<stdio.h>
#include<math.h>
int main()
{
int n,i=1,s,c=0;
long double k;
printf("Enter a number:");
scanf("%d",&n);
if(n>1)
{
k=sqrt(n);
s=k;
while(i<=s)
{if((int)s%i==0)
c++;
i++;
}
if(c==2)
printf("prime number\n");
else
printf("not a prime number\n");
}
else 
printf("not a prime number\n");
}
