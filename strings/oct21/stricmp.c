#include<stdio.h>
int stricmp1(char s2[],char s1[]);
int main()
{
	char s2[50],s1[50];
	printf("enter string 1:");
	scanf("%49[^\n]s",s1);
	printf("enter string 2:");
	scanf(" %49[^\n]s",s2);
	int n=stricmp1(s1,s2);
	printf("%d",n);
}
int stricmp1(char s1[],char s2[])
{
	int i=0;
	while(s1[i]!=0 && s2[i]!=0)
	{
		if(s1[i]==s2[i] || s1[i]+32==s2[i] || s1[i]-32==s2[i]);
		else return s1[i]-s2[i];
		i++;
	}
}
