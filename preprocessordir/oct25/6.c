#include<stdio.h>
#define prime(n) int i=1,c=0; while(i<n) { if(n%i==0) c++; i++;} \
			c==1?printf("%d is prime\n",n):printf("%d is not prime\n",n)
					
int main()
{
	int n,m;
	printf("enter range for prime number:");
	scanf("%d %d",&n,&m);
	for(;n<=m;n++)
	{
		prime(n);
	}
}
