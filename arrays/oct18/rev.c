#include<stdio.h>
void rev(int a[],int n)
{
	int i,j;
	for(i=0,j=n-1;i<j;i++,j--)
	{
		int temp;
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}

int main()
{
	int n;
	printf("enter length of array:");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	rev(a,n);
	printf("revesed order is:");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
