#include<stdio.h>
void printsubscript(int d);
void printdateinformat(int d,int m,int y);
void printdateinformat(int d,int m,int y)
{
	printsubscript(d);
	switch(m)
	{
		case 1:printf("january");break;
		case 2:printf("february");break;
		case 3:printf("march");break;
		case 4:printf("april");break;
		case 5:printf("may");break;
		case 6:printf("june");break;
		case 7:printf("july");break;
		case 8:printf("august");break;
		case 9:printf("september");break;
		case 10:printf("october");break;
		case 11:printf("november");break;
		case 12:printf("december");break;
	}
	printf("-%d is elder of all",y);
}
void printsubscript(int d)
{
	switch(d%10)
	{
		case 1:
			printf("%dst",d);
			break;
		case 2:
			printf("%dnd",d);
			break;
		case 3:
			printf("%drd",d);
			break;
		default:
			printf("%dth",d);
	}
}
