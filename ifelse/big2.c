#include<stdio.h>
int main()
{
	int a,b;
	printf("ENter 2 numbers:");
	scanf("%d%d",&a,&b);
	if(a>b)
		printf("%d is greater\n",a);
	else if(b>a)
		printf("%d is greater\n",b);
	else
	printf("both are equal\n");
}
	
