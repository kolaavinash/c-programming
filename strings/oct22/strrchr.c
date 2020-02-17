#include<stdio.h>
int lastoccurence(char str[],char c)
{
	int i,j;
	for(j=0;str[j]!='\0';j++);
	printf("length is:%d\n",j);
	j--;
	for(i=j;i>=0;i--)
	{
		if(str[i]==c)
			return i;
	}
	return -1;
}

int main()
{
	char str[50];
	printf("enter line of string:");
	scanf("%49[^\n]s",str);
	char c;
	printf("enter character to search:");
	scanf(" %c",&c);
	int i=lastoccurence(str,c);
	if(i>=0)
		printf("character found at index:%d",i);
	else
		printf("character not found");
}
