int datecompare(int d1,int m1,int y1,int d2,int m2,int y2);
int datecompare(int d1,int m1,int y1,int d2,int m2,int y2)
{
if(y1>y2)
return 1;
else if(y1<y2)
return 0;
else if(y1=y2)
{
if(m1>m2)
return 1;
else if(m1<m2)
return 0;
else if(m1=m2)
{
if(d1>d2)
return 1;
else 
return 0;
}
}
}
