#include<stdio.h>
int main()
{
	float s1,s2,s3,s4,s5,s6,sum=0,avg;
	printf("ENter marks of 6 subjects:");
	scanf("%f%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5,&s6);
	sum=s1+s2+s3+s4+s5+s6;
	avg=sum/600*100;
	if(avg>=80&&avg<=100)
	printf("you are in honours list\n");
	else if(avg>=60&&avg<=79)
	printf("you are in first division\n");
	else if(avg>=50&&avg<=59)
	printf("you are in second division\n");
	else if(avg>=40&&avg<=49)
	printf("you are in third division\n");
	else
	printf("FAILED\n");
}
