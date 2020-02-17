#include<stdio.h>
int main()
{
int i,j,n;
printf("Enter the number of rows: ");
scanf("%d",&n);
for(i=1,j=1;i<=n;)
{
	if(--i>=0)
	printf("*");
	else
	{
	printf("\n");
	j++;
	i=j;
	}
	}
}
