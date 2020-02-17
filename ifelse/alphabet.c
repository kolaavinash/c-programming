#include<stdio.h>
int main()
{
	char ch;
	printf("ENter a character:");
	scanf("%c",&ch);
	if(ch>=65)
	{
		if(ch<91)
		printf("it is an alphabet\n");
		if(ch>=97)
			{
			if(ch<123)
			printf("it is an alpahbet\n");
			else
			printf("it is not an alpahbet\n");
			}
	}
else
printf("it is not an alphabet\n");
}
	
