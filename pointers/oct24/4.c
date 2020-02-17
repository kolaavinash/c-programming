#include<stdio.h>
int add(int *p1,int *p2)
{
	int c=*p1 + *p2;
	return c;
}
int sub(int *p1,int *p2)
{
	int c=*p1 - *p2;
	return c;
}
int mul(int *p1,int *p2)
{
	int c=*p1 * *p2;
	return c;
}
int quo(int *p1,int *p2)
{
	int c=*p1 / *p2;
	return c;
}
int rem(int *p1,int *p2)
{
	int c=*p1 % *p2;
	return c;
}

int main()
{
	int a,b;
	printf("enter 2 numbers:");
	scanf("%d%d",&a,&b);
	int c=add(&a,&b);
	printf("addition:%d\n",c);
	c=sub(&a,&b);
	printf("subtraction:%d\n",c);
	c=mul(&a,&b);
	printf("multiplication:%d\n",c);
	c=quo(&a,&b);
	printf("quotient:%d\n",c);
	c=rem(&a,&b);
	printf("remainder:%d\n",c);
}
