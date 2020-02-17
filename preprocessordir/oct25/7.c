#include<stdio.h>
#define big3(a,b,c) a>b?(a>c?a:c):b>c?b:c
int main()
{
	//int x,y,z;
	//printf("enter 3 integers:");
	//scanf("%d%d%d",&x,&y,&z);
	printf("%d\n",big3(10,20,30));
	printf("%f\n",big3(10.20,20.30,30.10));
	printf("%lf\n",big3(10.203040,20.304050,30.405060));
	printf("%c\n",big3('a','b','c'));
}

