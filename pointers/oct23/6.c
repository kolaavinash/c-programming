#include<stdio.h>
int main()
{
	int *p1;
	char *p2;
	float *p3;
	double *p4;
	long *p5;
	short *p6;
	long double *p7;
	long long int *p8;
	printf("size of int:%ld\n",sizeof(int*));
	printf("size of char:%ld\n",sizeof(char*));
	printf("size of float:%ld\n",sizeof(float*));
	printf("size of double:%ld\n",sizeof(double*));
	printf("size of long int:%ld\n",sizeof(long*));
	printf("size of short int:%ld\n",sizeof(short*));
	printf("size of long double:%ld\n",sizeof(long double*));
	printf("size of long long int:%ld\n",sizeof(long long*));
}
