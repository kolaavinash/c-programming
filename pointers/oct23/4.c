#include<stdio.h>
int main()
{
	int a=10,b=20,c=30;
	int *p1;
	p1=&a;
	p1=&b;
	p1=&c;
	printf("value of a:%d\n",*p1);
	printf("value of b:%d\n",*p1);
	printf("value of c:%d\n",*p1);
}
	
