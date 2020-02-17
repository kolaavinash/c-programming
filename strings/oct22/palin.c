#include<stdio.h>
int palin(char str[])
{
	int i,j,n=0;
	for(j=0;j<str[j]!=0;j++);
	printf("length is:%d\n",j);
	for(i=0;i<j;i++)
	{
		if(str[i]==str[--j])
			n++;
	}
	if(i==n)
		return 1;
	else
		return 0;
}


int main()
{
	char str[20];
	printf("enter string:");
	scanf("%s",str);
	int n=palin(str);
	if(n==1)
		printf("it is palindrome string");
	else
		printf("not a palindrome string");
}
