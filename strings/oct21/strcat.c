#include<stdio.h>
void strcat1(char s2[],char s1[]);
int main()
{
	char s2[50],s1[20];
	printf("enter string 2:");
	scanf("%29[^\n]s",s2);
	printf("enter string 1:");
	scanf(" %19[^\n]s",s1);
	strcat1(s2,s1);
	printf("string after string concetination:%s",s2);
}
void strcat1(char s2[],char s1[])
{
	int i,j;
	for(i=0;i<s2[i]!=0;i++);
		printf("length of s2 is:%d\n",i);
	for(j=0;i<s2[i]!=0,j<s1[j]!=0;)
		s2[i++]=s1[j++];
}
