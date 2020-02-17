#include<stdio.h>
int main()
{
	int n,d,c=0,rem;
	printf("Enter any number:");
	scanf("%d",&n);
	printf("Enter any digit:");
	scanf("%d",&d);
	while(n>0)
	{
	rem=n%10;
	if(d==rem)
	c++;
	n=n/10;
	}
	printf("no of times digit occured is:%d\n",c);
}
