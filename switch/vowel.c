#include<stdio.h>
int main()
{
char ch;
printf("enter a character:");
scanf("%c",&ch);
switch(ch)
{
case 'A':
case 'a':
case 'E':
case 'e':
case 'I':
case 'i':
case 'O':
case 'o':
case 'U':
case 'u':printf("vowel\n");
	break;
default:printf("consonant\n");
	break;
}
}
