#include<stdio.h>
#define max 10
#define sum(arr,l) int s=0,i; for(i=0;i<l;i++) s=s+arr[i];printf("sum:%d",s);
int main()
{
	int arr[max];
	int l=sizeof(arr)/sizeof(arr[0]);
	printf("length:%d\n",l);
	printf("enter array elemnts:");
	for(int i=0;i<l;i++)
	{
		scanf("%d",&arr[i]);
	}
	sum(arr,l);
}
