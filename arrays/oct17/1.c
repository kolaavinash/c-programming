#include<stdio.h>
void even(int a[10])
{
printf("even numbers:");
	for(int i=0;i<10;i++)
	{
		if(a[i]%2==0)
			printf("%d ",a[i]);
	}
}
void odd(int a[10])
{
printf("\nodd numbers:");
	for(int i=0;i<10;i++)
	{
		if(a[i]%2!=0)
			printf("%d ",a[i]);
	}
}
int main()
{
int a[10]={1,2,3,4,5,6,7,8,9,10};
even(a);
odd(a);
for(int i=0;i<10;i++)
{
	printf("\n %d ",a[i]+5);
}
}

