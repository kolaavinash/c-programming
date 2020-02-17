#include<stdio.h>
int alpnum(char str[])
{
	int i,j=0;
	int c=0,n=0;
	/*for(j=0;str[j]!=0;j++);*/
	while(str[j])
		j++;
	printf("length is:%d\n",j);
	for(i=0;str[i]!=0;i++)
	{
		if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
			c++;
		if(str[i]>=48 && str[i]<=57)
			n++;
	}
	if(c>0 && n==0)
		return 1;
	else if(n>0 && c==0)
		return 2;
	else
		return 3;

}
int main()
{
	char str[50];
	printf("enter  string:");
	scanf("%49[^\n]s",str);
	int n=alpnum(str);
	if(n==1)
		printf("character string\n");
	else if(n==2)
		printf("numerical string\n");
	else
		printf("alphanumerical string\n");
}
