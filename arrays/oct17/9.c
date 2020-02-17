#include<stdio.h>
void rev(float a[100],int n,int i);
void rev(float a[100],int n,int i)
{
	int j;
	for(j=i-1;j>=0;j--)
	{
		printf("%f ",a[j]);
	}
}

int main()
{
	int n,i;
l1:	printf("enter no of students(1-100):");
	scanf("%d",&n);
	if(n<0 && n>100)
	{
		printf("enter students less than 100");
		goto l1;
	}
	float a[n];
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%f\n",a[i]);
	}
	//rev(a,n,i);
}

