#include<stdio.h>
int main()
{
char c[]={'a','v','i','n','a','s','h'};
for(int i=0;i<sizeof(c)/sizeof(c[0]);i++)
printf("%c",c[i]);
}
