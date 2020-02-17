#include<stdio.h>
int main()
{
	float s1,s2,s3,s4,s5,s6,sum=0,avg;
	printf("ENter marks of 6 subjects:");
	scanf("%f%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5,&s6);
	sum=s1+s2+s3+s4+s5+s6;
	avg=sum/600*100;
	if(avg>=80)
	printf("you are in honours list");
	else if(avg>=60)
	printf("you are in first division");
	else if(avg>=50)
	printf("you are in second division");
	else if(avg>=40)
	printf("you are in third division");
	else
	printf("FAILED");
}
