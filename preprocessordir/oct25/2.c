#include<stdio.h>
#define max 5
#define MAX(x,y) (x>y)?x:0
void sort(int arr[])
{
	int i,j,temp;
	for(i=0;i<max-1;i++)
	{
		for(j=0;j<max-1-i;j++)
		{
			//i:wq
			//: c=MAX(arr[j],arr[j+1])
			if(MAX(arr[j],arr[j+1]))
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main()
{
	int arr[max];
	printf("enter array elements:");
	for(int i=0;i<max;i++)
		scanf("%d",&arr[i]);
	sort(arr);
	printf("array elements after sort:");
	for(int i=0;i<max;i++)
		printf("%d\n",arr[i]);
}	

