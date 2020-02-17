#include<stdio.h>
#define MAX(x,y) x>y?x:y
int main()
{
	int a,b;
	printf("enter 2 numbers:");
	scanf("%d%d",&a,&b);
	printf("biggest:%d",MAX(a,b));
}

