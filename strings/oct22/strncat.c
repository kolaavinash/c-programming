#include<stdio.h>
void strncat1(char s2[],char s1[],int n);
int main()
{
	char s2[50],s1[20];
	printf("enter string 2:");
	scanf("%29[^\n]s",s2);
	printf("enter string 1:");
	scanf(" %19[^\n]s",s1);
	int n;
	printf("enter no of elements to concatinate:");
	scanf("%d",&n);
	strncat1(s2,s1,n);
	printf("string after string concatination:%s\n",s2);
}
void strncat1(char s2[],char s1[],int n)
{
	int i,j;
	for(i=0;s2[i]!=0;i++);
	printf("length of s2 is:%d\n",i);
	for(j=0;s2[i]!=0,j<n;)
		s2[i++]=s1[j++];
}
