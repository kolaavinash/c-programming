#include<stdio.h>
void swap(int arr[10]);
int main()
{
	int i;
	int arr[2]={11,20};
	//printf("size of array:%lu\n",sizeof(arr));
	for(i=0;i<2;i++)
	{
	printf("array elements before swap:%d\n",arr[i]);
	}
	swap(arr);
	for(i=0;i<2;i++)
	{
	printf("array elements after swap:%d\n",arr[i]);
	}
}
