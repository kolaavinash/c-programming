#include<stdio.h>
void strncpy1(char s2[],char s1[],int n);
int main()
{
	char s2[50],s1[50];
	printf("enter string 1:");
	scanf("%49[^\n]s",s1);
	int n;
	printf("enter no of elements to copy:");
	scanf("%d",&n);
	strncpy1(s2,s1,n);
	printf("string 2 after string copy:");
	printf("%s\n",s2);
}
void strncpy1(char s2[],char s1[],int n)
{
	int i=0,j=0;
	while(i<n && s1[i]!=0)
		s2[j++]=s1[i++];
}
