#include<stdio.h>
int main()
{
int a,b,c,d;
printf("Enter 4 numbers:");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b)
if(a>c)
if(a>d)
printf("%d is greater\n",a);
			
if(b>a)
if(b>c)
if(b>d)
printf("%d is greater\n",b);

if(c>a)
if(c>b)
if(c>d)
printf("%d is greater\n",c);

else
printf("%d is greater\n",d);

}
