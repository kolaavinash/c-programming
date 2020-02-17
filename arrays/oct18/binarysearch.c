#include<stdio.h>
void bubble(int a[],int n)
{
	int j,i;
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
int binarysearch(int a[],int n,int search)
{
	int i=0,j=n-1,m;
	for(;i<=j;)
	{
		m=(i+j)/2;
		if(search==a[m])
			return m;
		else if(search<a[m])
			j=m-1;
		else if(search>a[m])
			i=m+1;
		else
			return m;
	}
	return -1;
}

int main()
{

	int a[100];
	int n,i,search;
	printf("enter no of array elements:");
	scanf("%d",&n);
	printf("enter element to search in array:");
	scanf("%d",&search);
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
	int index=binarysearch(a,n,search);
	if(index!=-1)
	{
		printf("\nelement found at index:%d\n",index);
	}
	else 
		printf("\nelement not found\n");
}
