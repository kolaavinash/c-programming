#include<stdio.h>
void replace(char str[],char c,char r)
{
	int i,j,n=0;
	for(j=0;j<str[j]!=0;j++);
	printf("length is:%d\n",j);
	for(i=0;i<str[i]!=0;i++)
	{
		if(r==str[i])
		{
			str[i]=c;
			n++;
		}
	}
	if(n==0)
		printf("enter char to replace in given string only\n");
}

int main()
{
	char str[]="Hello world";
	char c,r;
	printf("enter character to insert in the given string:");
	scanf("%c",&c);
	printf("enter character to replace in the given string:");
	scanf(" %c",&r);
	replace(str,c,r);
	printf("%s\n",str);
}
