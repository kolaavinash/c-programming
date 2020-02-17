#include<stdio.h>
void bubble(int a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main()
{

	int a[100];
	int n,i;
	printf("enter no of array elements:");
	scanf("%d",&n);
	printf("enter array elements:");
        for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubble(a,n);
	printf("array after bubble sort is:");
	for(i=0;i<n;i++)
	{
      		printf("%d ",a[i]);
	}
}
