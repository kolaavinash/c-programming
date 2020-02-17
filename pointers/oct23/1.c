#include<stdio.h>
int main()
{
	int a=10;
	int *ptr;
	ptr=&a;
	printf("address:%p\n",ptr);
	printf("value:%d\n",*ptr);
	printf("size is:%lu\n",sizeof(ptr));
}
