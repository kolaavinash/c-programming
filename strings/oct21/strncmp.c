#include<stdio.h>
int strncmp1(char s2[],char s1[],int n);
int main()
{
	char s2[50],s1[50];
	printf("enter string 1:");
	scanf("%49[^\n]s",s1);
	printf("enter string 2:");
	scanf(" %49[^\n]s",s2);
	int n;
	printf("no of characters to compare:");
	scanf("%d",&n);
	int x=strncmp1(s1,s2,n);
	printf("return value:%d",x);
}
int strncmp1(char s1[],char s2[],int n)
{
	int i=0;
	while(s1[i]!=0 && s2[i]!=0 && i<n)
	{
		if(s1[i]!=s2[i])
			return s1[i]-s2[i];
		i++;
	}
	return 0;
}
