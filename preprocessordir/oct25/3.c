//#include<stdio.h>
#include"my.h"
int main()
{
	int a,b;
	printf("enter 2 numbers:");
	scanf("%d%d",&a,&b);
	printf("%d\n",ADD(a,b));
	printf("%d\n",SUB(a,b));
	printf("%d\n",MUL(a,b));
	printf("%d\n",DIV(a,b));
}
