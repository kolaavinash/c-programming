#include<stdio.h>
void trim(char str[])
{
	int i=0,j;
	for(j=0;str[j]!=0;j++);
	printf("length is:%d\n",j);
	//printf("array is:%c\n",str[0]);
	for(i=0;str[i]<j;i++)
	{
			while(str[i]!=' ')
			{
				str[i]=str[i+1];
				i++;
			}
	}
}
int main()
{
	char str[50];
	printf("enter string:");
	scanf("%49[^\n]s",str);
	trim(str);
	printf("string after trim is:%s",str);
}
