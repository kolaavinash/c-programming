#include<stdio.h>
int strlen1(char str[]);
int main()
{
	char str[20];
	scanf("%19[^\n]s",str);
	int l=strlen1(str);
	printf("length of string is:%d",l);
}
int strlen1(char str[])
{
	int i=0;
	while(str[i])
	i++;
	return i;
}
