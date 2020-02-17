#include<stdio.h>
int main()
{
	int x=10,y=10;
	int *p1,*p2;
	p1=&x;
	p2=&y;
	int z=*p1+*p2;
	printf("addition of 2 pointers:%d\n",z);
}
