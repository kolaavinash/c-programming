#include<stdio.h>
#define max 5
#define fun(arr,l) int j;for(j=0;j<l;j++) printf("%d\n",arr[j]);
int main()
{
	int arr[max];
	int i;
	int l=sizeof(arr)/sizeof(arr[0]);
	printf("length:%d\n",l);
	printf("array elements:");
	for(i=0;i<l;i++)
		scanf("%d",&arr[i]);
	fun(arr,l);
}
