int isvaliddate(int d,int m,int y);
int isleapyear(int y);
int isvaliddate(int d,int m,int y)
{
int c=isleapyear(y);
if(c==2&&m==2)
{
if(d>0&&d<=29)
return 1;
}
else if((m>0&&m<=12)&&(d>0&&d<=31)&&(y>0))
return 1;
else 
return 0;
}

int isleapyear(int y)
{
if(y%100!=0&&y%4==0||y%400==0)
return 1;
else 
return 0;
}
