#include<stdio.h>
#define alpnum(c) if(c>=48 && c<=57) printf("number\n");\
       			else if(c>=65 && c<=90 || c>=97 && c<=122) printf("alphabet\n");\
			else printf("special character\n");
int main()
{
char c;
printf("enter a char or num or special char:");
scanf("%c",&c);
alpnum(c);
}

