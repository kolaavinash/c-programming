#include<stdio.h>
void strlwr1(char str[]);
int main()
{
	char str[50];
	printf("enter string:");
	scanf("%49[^\n]s",str);
	strlwr1(str);
	printf("string after string lower is:%s\n",str);
}
void strlwr1(char str[])
{
	int i=0;
	while(str[i])
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i]=str[i]+32;
		}
		i++;
	}
}
