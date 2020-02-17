#include<stdio.h>
int main()
{
char ch;
printf("Enter a charcter:");
scanf("%c",&ch);
(ch>=65&&ch<=90)?printf("%c",ch+32):ch>=97&&ch<=122?printf("%c",ch-32):printf("Not an Alphabet"); 
return 1;
}

