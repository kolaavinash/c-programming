#include<stdio.h>
int atoi1(char str[])
{
//	printf("string in fun:%s\n",str);
	int i,j,n=0;
//	for(j=0;str[j]!=0;j++);
//	printf("length is:%d\n",j);
	for(i=0;str[i]!='\0';i++)
	{
		n=n*10+(str[i]-48);
	//	printf("n is:%d",n);
	}
	return n;
}

int main()
{
	char str[20];
	printf("enter numberical string:");
	scanf("%19[^\n]s",str);
	int n=atoi1(str);
	printf("string value:%s\n",str);
	printf("integer value:%d\n",n);
}
