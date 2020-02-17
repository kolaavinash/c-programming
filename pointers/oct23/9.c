#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int *p1;
	int i;
	for(i=0;i<10;i++)
	{
		p1=&arr[i];
		printf("%d\n",*p1);
		printf("%p\n",p1);
	}
}
