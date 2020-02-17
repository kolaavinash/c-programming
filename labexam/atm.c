#include<stdio.h>
int main()
{
int amount,a;
printf("Enter the amount:");
scanf("%d",&amount);
if(amount%50==0)
{
a=amount/2000;
amount=amount%2000;
if(a!=0)
printf("2000 notes:%d\n",a);


a=amount/500;
amount=amount%500;
if(a!=0)
printf("500 notes:%d\n",a);

a=amount/200;
amount=amount%200;
if(a!=0)
printf("200 notes:%d\n",a);

a=amount/100;
amount=amount%100;
if(a!=0)
printf("100 notes:%d\n",a);

a=amount/50;
amount=amount%50;
if(a!=0)
printf("50 notes:%d\n",a);


}  
else 
printf("Enter the amount in multiples of 50 only");
}
