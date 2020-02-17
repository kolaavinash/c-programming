#include<stdio.h>
int main()
{
int n,c,big,small;
printf("Enter how many numbers:");
scanf("%d",&c);
printf("Enter first number:\n");
scanf("%d",&n);
big=n;
small=n;
c=c-1;
while(c!=0)
{scanf("%d",&n);
if(big<n)
big=n;
if(small>n)
small=n;
c--;
}
printf("biggest is:%d\n",big);
printf("smallest is:%d\n",small);
}


