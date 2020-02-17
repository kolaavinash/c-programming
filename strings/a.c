#include<stdio.h>
#include<string.h>
void rev(char str[],int i,int j)
{
	int temp;
	for(;i<j;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		//printf("stri:%c strj: %c",str[i],str[j]);
	}
}
void words(char str[],int i,int j)
{
	printf("length of whole string is:%d\n",j);
	rev(str,i,j);
	printf("string after string rev:%s\n",str);
	int start,end;
	start=i;
	end=i;
	for(;end<j;end++)
	{
		if(str[end]==' ')
			continue;
		start=end;
		while(str[end]!=' ' && end<=j)
		{
			end++;
		}
		printf("first word len:%d\n",end);
		end--;
		rev(str,start,end);
	}
}
int main()
{
	char str[50];
	printf("enter string:");
	scanf("%49[^\n]s",str);
	words(str,0,strlen(str)-1);
	printf("%s",str);
}
