#include<stdio.h>
int search(int a[10],int n);
int search(int a[10],int n)
{
	for(int j=0;j<10;j++)
	{	if(n==a[j])
		return j;
	}
	return -1;
}

int main()
{
	int n;
	printf("enter the element:");
	scanf("%d",&n);
	int a[10];
	for(int i=0;i<10;i++)
		scanf("%d",&a[i]);
	int index=search(a,n);
	if(index!=-1)
		printf("index of the element:%d",index);
	else
		printf("element not found at any index");
}

