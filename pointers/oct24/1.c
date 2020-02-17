#include<stdio.h>
void swapcbv(int a,int b)
{
	int t=a;
	a=b;
	b=t;
}

void swapcbr(int *p1,int *p2)
{
	int t=*p1;
	*p1=*p2;
	*p2=t;
}
int main()
{
	int a=4,b=5;
	printf("before swap:a=%d,b=%d\n",a,b);
	swapcbv(a,b);
	printf("after CBV swap:a=%d,b=%d\n",a,b);
	swapcbr(&a,&b);
	printf("after CBR swap:a=%d,b=%d\n",a,b);
}
