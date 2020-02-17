#include<stdio.h>
int main()
{
int base,exp,i=1,j=1,l=0,pow=0;
printf("Enter the base and exponent: ");
scanf("%d %d",&base,&exp);
l=base;
if(base==0 && exp==0)
printf("Not valid\n");
else if(base==0)
printf("Power value is 0\n");
else if(exp==0)
printf("Power value is 1\n");
else if(exp==1)
printf("Power value is %d\n",base);
else
{
	for(;i<exp;i++)
	{
		for(j=1;j<=base;j++)
		{
			pow=pow+l;
		}
		l=pow;
		pow=0;
	}
	
	 pow=l;
      printf("Power is %d\n",pow);

}
}

