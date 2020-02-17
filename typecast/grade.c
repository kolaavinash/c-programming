#include<stdio.h>
int main()
{
	float s1,s2,s3,s4,s5,s6,sum=0,avg;
	printf("ENter marks of 6 subjects:");
	scanf("%f%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5,&s6);
	sum=s1+s2+s3+s4+s5+s6;
	avg=sum/600*100;
avg>=80?printf("honours list"):avg>=60?printf("first division"):avg>=50?printf("second division"):avg>=40?printf("third division"):printf("FAILED");

}
