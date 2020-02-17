#include<stdio.h>
int sum(int a[10]);
int sum(int a[10])
{
	int s=0;
	for(int j=0;j<10;j++)
		s=s+a[j];
	return s;
}

int main()
{
	int a[10];
	for(int i=0;i<10;i++)
		scanf("%d",&a[i]);
	int s=sum(a);
	printf("sum of elements is:%d",s);
}

