#include<stdio.h>
int main()
{
	int a,b,c;
	printf("ENter 3 numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
		printf("%d is big\n",a);
	else if(b>c)
		printf("%d is big\n",b);
	else
		printf("%d is big\n",c);

}
	
