//#include<stdio.h>
void swap(int arr[10])
{
	//printf("size of array:%lu\n",sizeof(arr));
	int t;
	t=arr[0];
	arr[0]=arr[1];
	arr[1]=t;
}
