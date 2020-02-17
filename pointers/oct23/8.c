#include<stdio.h>
int main()
{
	int x=10,y=20,z=30;
	int *p1,*p2,*p3;
	p1=&x;
	p2=&y;
	p3=&z;
	int temp=*p1;
	x=*p2;
	y=*p3;
	z=temp;
	printf("x:%d\ty:%d\tz=%d\n",*p1,*p2,*p3);
}
