#include<stdio.h>
void strrev(char str[]);
int main()
{
	char str[50];
	printf("enter string:");
	scanf("%49[^\n]s",str);
	strrev(str);
	printf("reversed string is:%s\n",str);
}
void strrev(char str[50])
{
	int i=0,temp,j;
	for(j=0;str[j]!=0;j++);
	printf("length:%d\n",j);
	j--;	
	while(i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
}
