#include<stdio.h>
void printdateinformat(int d,int m,int y);
void printsubscript(int d);
int datecompare(int d1,int m1,int y1,int d2,int m2,int y2);
int isvaliddate(int d,int m,int y);
int isleapyear(int y);
int main()
{
	int n,i,d,m,y,d1,m1,y1;
	printf("number of candidates:");
	scanf("%d",&n);
l1:
	printf("date of birth of candidate:");
	scanf("%d-%d-%d",&d,&m,&y);
	 printf("D1: %d %d %d\n",d,m,y);
	int x=isvaliddate(d,m,y);
	if(x==1);
	else
	{
		printf("enter valid date\n");
		goto l1;
	}
	for(i=1;i<n;i++)
	{
l2:	   printf("date of birth of candidate:");
	   scanf("%d-%d-%d",&d1,&m1,&y1);
	   int zz=isvaliddate(d1,m1,y1);
	   if(zz==1);
	   else
	   {
		   printf("enter valid date");
		   goto l2;
	   }
	   printf("D1: %d %d %d\n",d,m,y);
	   printf("D1: %d %d %d\n",d1,m1,y1);
	   int z=datecompare(d,m,y,d1,m1,y1);
	   if(z==0);
	   else
	   {	   
		   d=d1;
		   m=m1;
		   y=y1;
	   }
	}
	   printf("D1: %d %d %d\n",d,m,y);
	printdateinformat(d,m,y);
}


