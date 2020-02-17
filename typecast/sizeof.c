#include<stdio.h>
int main()
{
printf("int size%lu\n",sizeof(int));
printf("short int size%lu\n",sizeof(short int));
printf("size of unsigned short int%lu\n",sizeof(unsigned short int));
printf("size of long int%lu\n",sizeof(long int));
printf("size of unsigned long int%lu\n",sizeof(unsigned long int));
printf("size of unsigned int%lu\n",sizeof(unsigned int));
printf("size of char%lu\n",sizeof(char));
printf("size of unsigned char%lu\n",sizeof(unsigned char));
printf("size of double%lu\n",sizeof(double));
printf("size of long double%lu\n",sizeof(long double));
printf("size of float%lu\n",sizeof(float));
printf("%lu\n",sizeof(45));
printf("%lu\n",sizeof('a'));
printf("%lu\n",sizeof(3.14));
printf("%lu\n",sizeof(3.14l));
}
