#include<stdio.h>
int main()
{
char ch;
printf("Enter a character:");
scanf("%c",&ch);
if(ch>=65&&ch<=90)
	{ch=ch+32;
	printf("%c\n",ch);}
else if(ch>=97&&ch<=122)
	{ch=ch-32;
	printf("%c\n",ch);}
else
printf("Enter characters only\n");
}
