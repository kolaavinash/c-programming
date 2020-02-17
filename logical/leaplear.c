#include<stdio.h>
int main()
{
int y;
printf("Enter any year:");
scanf("%d",&y);
if(y%4==0&&y%100!=0||y%400==0)
printf("leapyear\n");
else
printf("not a leap year\n");
}

