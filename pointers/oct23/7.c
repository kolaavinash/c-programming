#include<stdio.h>
int main()
{
	int a=10,b=20,c=30;
	int *p1,*p2,*p3;
	p1=&a;
	p2=&b;
	p3=&c;
	int big=*p1>*p2?*p1>*p3?*p1:*p3:*p2>*p3?*p2:*p3;
	printf("biggest is:%d\n",big);
}
