#include<stdio.h>
int main()
{
	int size,i;
	printf("enter size value:");
	scanf("%d",&size);
	float array[size]={1.0,2.5};
	for(i=0;i<size;i++)
		scanf("%f",&array[i]);
	for(i=0;i<size;i++)
		printf("%f",array[i]);
}

