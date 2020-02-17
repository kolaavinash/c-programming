#include<stdio.h>
void rar(int *p1,int *p2,int *p3)
{
	int t=*p3;
	*p3=*p2;
	*p2=*p1;
	*p1=t;
}
int main()
{
	int a=4,b=5,c=6;
	printf("before rotation:a=%d,b=%d,c=%d\n",a,b,c);
	rar(&a,&b,&c);
	printf("after rotation:a=%d,b=%d,c=%d\n",a,b,c);
}
