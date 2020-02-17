#include<stdio.h>
int main()
{
int i;
float f;
printf("enter float number:");
scanf("%f",&f);
i=(int)f;
printf("%d\n",i%10);
f=f-i;
f=f*10;
i=(int)f;
printf("%d\n",i);
}
