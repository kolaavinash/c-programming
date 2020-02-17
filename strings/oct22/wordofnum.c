#include<stdio.h>
void wordofnum(char str[])
{
	int i,j,k;
	//for(j=0;str[j]!=0;j++);
	//printf("length is:%d\n",j);
	for(i=0;str[i]!='\0';i++)
	{
		k=str[i];
	//	printf("k is:%d\n",k);
		switch(k)
		{
			case 48:printf("zero\t");break;
			case 49:printf("one\t");break;
			case 50:printf("two\t");break;
			case 51:printf("three\t");break;
			case 52:printf("four\t");break;
			case 53:printf("five\t");break;
			case 54:printf("six\t");break;
			case 55:printf("seven\t");break;
			case 56:printf("eight\t");break;
			case 57:printf("nine\t");break;
		}
	}
}
int main()
{
	char str[50];
	printf("enter numberical string:");
	scanf("%49[^\n]s",str);
	wordofnum(str);
}
