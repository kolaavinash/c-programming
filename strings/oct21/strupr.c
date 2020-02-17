#include<stdio.h>
void strupr1(char str[]);
int main()
{
	char str[50];
	printf("enter string:");
	scanf("%49[^\n]s",str);
	strupr1(str);
	printf("string after string upper is:%s\n",str);
}
void strupr1(char str[])
{
	int i=0;
	while(str[i])
	{
		if(str[i]>=97 && str[i]<=122)
		{
			str[i]=str[i]-32;
		}
		i++;
	}
}
