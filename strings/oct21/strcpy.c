#include<stdio.h>
#include<string.h>
//void strcpy1(char s2[],char s1[]);
int main()
{
	char s2[10],s1[20];
	printf("enter string 1:");
	scanf("%49[^\n]s",s1);
	strcpy(s2,s1);
	//strcpy1(s2,s1);
	printf("string 2 after string copy:");
	printf("%s\n",s2);
	printf("%s\n",s1);
}
/*void strcpy1(char s2[],char s1[])
{
	int i=0;
	for(i=0;i<50;i++)
		s2[i]=s1[i];
}*/
