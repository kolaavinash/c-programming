#include<stdio.h>
int main()
{
int r,c=1,n1=1,n2=1,n3;
printf("enter range:");
scanf("%d",&r);
printf("%d\t%d\t",n1,n2);
r=r-2;
while(c<=r)
{
n3=n1+n2;
printf("%d\t",n3);
n1=n2;
n2=n3;
c++;
}
printf("\n");
}
