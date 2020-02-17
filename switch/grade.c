#include<stdio.h>
int main()
{int n;
	float s1,s2,s3,s4,s5,s6,sum=0,avg;
	printf("ENter marks of 6 subjects:");
	scanf("%f%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5,&s6);
	sum=s1+s2+s3+s4+s5+s6;
	avg=sum/600*100;
n=avg/10;
switch(n)
{
case 10:
case 9:
case 8:printf("honours list\n");
		break;
case 7:
case 6:printf("first division\n");
		break;
case 5:printf("second division\n");
		break;
case 4:printf("third division\n");
		break;
default:printf("FAILED\n");
		break;

}
}
