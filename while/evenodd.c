#include<stdio.h>
int main()
{
int n,m,i;
printf("Enter range:");
scanf("%d%d",&n,&m);
i=n;
if(i%2==0)
printf("even numbers:\n");
else 
printf("odd numbers:\n");
while(n<=m)
{printf("%d\t",n);
n+=2;
}
}

