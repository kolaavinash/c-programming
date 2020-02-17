#include<stdio.h>
int count(int a[10],int n);
int count(int a[10],int n)
{
	int c=0;
	for(int j=0;j<10;j++)
	{
		if(n==a[j])
			c++;
	}
	return c;
}

int main()
{
	int n,c=0;
	printf("enter number:");
	scanf("%d",&n);
	int a[10];
	for(int i=0;i<10;i++)
		scanf("%d",&a[i]);

	c=count(a,n);
	printf("%d repeated %d times in the array",n,c);
}

