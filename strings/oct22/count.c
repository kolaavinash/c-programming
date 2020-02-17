#include<stdio.h>
int count(char str[])
{
	int i,j,c=0;
	for(j=0;str[j]!='\0';j++);
	printf("length is:%d\n",j);
	for(i=0;str[i]!=0;i++)
	{
			c++;
	}
	return c;
}

int main()
{
	char str[50];
	printf("enter line of string:");
	scanf("%49[^\n]s",str);
	int c=count(str);
	printf("no of words in string:%d",c);
}
