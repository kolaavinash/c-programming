#include<stdio.h>
#include<stdlib.h>
int *func(int a, int b, int *c)
{
	int x=a+b;
	*c=a-b;
	return(&x);
} 
int main(){
	int *ptr1,*ptr2;
	ptr1=(int *)malloc(sizeof(int));
	ptr2=func(20,10,ptr1);
	printf("%d %d",*ptr1,*ptr2);
}
