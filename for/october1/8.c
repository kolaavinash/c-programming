#include<stdio.h>
int main()
{
int i,j,k=1,n;
printf("enter a number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++,k++)
{
printf("%d",k);
}
printf("\n");
}
}
