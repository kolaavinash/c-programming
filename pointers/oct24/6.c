#include<stdio.h>
int * fun();
int main()
{
	int arr[100],size,i;
	printf("enter size of array:");
	scanf("%d",&size);
	printf("enter array elements:");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	int *a=fun();
	for(i=0;i<size;i++)
	{
		*a=arr[i];
		fun();
	}
}

int * fun()
{
	static int b;
	if(b!=0)
		printf("square:%d\n",b*b);
	return &b;
}

