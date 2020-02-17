#include<stdio.h>
int main()
{
	int a=10;
	int *p1,*p2,*p3;
	p1=&a;
	p2=&a;
	p3=&a;
	printf("value of a:%d\n",*p1);
	printf("value of a:%d\n",*p2);
	printf("value of a:%d\n",*p3);
	a=20;
	printf("value of a:%d\n",*p1);
	printf("value of a:%d\n",*p2);
	printf("value of a:%d\n",*p3);
	a=30;
	printf("value of a:%d\n",*p1);
	a=40;
	printf("value of a:%d\n",*p2);
	a=50;
	printf("value of a:%d\n",*p3);


}
	
