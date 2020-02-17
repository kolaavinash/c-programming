#include<stdio.h>
void big(int a[10])
{
	int i;
	int index,b=a[0];
	for(i=1;i<10;i++)
	{
		if(a[i]>=b)
		{
			b=a[i];
			index=i;
		}
	}
	printf("biggest is %d and index is%d\n",b,index);
}
void small(int a[10])
{
	int index,s=a[0];
	for(int i=1;i<10;i++)
	{
		if(a[i]<=s)
		{
			s=a[i];
			index=i;
		}
	}
	printf("smallest is %d and index is%d\n",s,index);
}
int main()
{
int a[10];
for(int i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
big(a);
small(a);
}

