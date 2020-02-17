
#include<stdio.h>
void trim(char str[])
{
	int i=0,j,n=0;
	for(j=0;str[j]!=0;j++);
	printf("length is:%d\n",j);
	printf("array is:%c\n",str[0]);
int k=0;
	if(str[0]==' ')
	{
		k++;
		str[i]=str[k];
	while(str[i])
	{
		str[i]=str[k];
		i++;
		k++;
	
	}
	}
	i=i-2;
	str[i]='\0';
}


int main()
{
	char str[50];
	printf("enter string:");
	scanf("%49[^\n]s",str);
	trim(str);
	printf("string after trim is:%s",str);
}
