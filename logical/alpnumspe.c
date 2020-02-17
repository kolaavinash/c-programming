#include<stdio.h>
int main()
{
char ch;
printf("Enter a character:");
scanf("%c",&ch);
if(ch>=65&&ch<=90||ch>=97&&ch<=122)
printf("character\n");
else if(ch>=48&&ch<=57)
printf("number\n");
else
printf("special character\n");
}
