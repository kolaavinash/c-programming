#include<stdio.h>
int main()
{
	int i,n,j;
	int arr[8];
	printf("enter number:");
	scanf("%d",&n);
	i=0;
	while(n>0)
	{
		arr[i]=n%8;
		n=n/8;
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d ",arr[j]);
	}
}

