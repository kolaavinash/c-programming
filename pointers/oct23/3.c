#include<stdio.h>
int main()
{
	char x,y;
	char *p1,*p2;
	p1=&x;
	p2=&y;
	printf("enter 2 characters:");
	scanf("%c %c",&x,&y);
	if(*p1 > *p2)
		printf("%c has higher ascii value\n",x);
	else
		printf("%c has higher ascii value\n",y);
}
