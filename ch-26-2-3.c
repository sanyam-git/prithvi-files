//This programme take user inputs only in integers..
#include<stdio.h>

int t_check(int a, int b, int c)
{int flag=0;
if(a<b+c && b<a+c && c<a+b)
flag=1;
return flag;}

int eq(int a, int b,int c)
{int flag=0;
if(a==b && b==c)
flag=1;
return flag;}

int iso(int a,int b, int c)
{int flag=0;
if( a==b || b==c || c==a)
flag=1;
return flag;}

int right(int a,int b, int c)
{int flag=0;
if( a*a==b*b+c*c || b*b==c*c+a*a || c*c==a*a+b*b)
flag=1;
return flag;}

int main()
{int a,b,c;
do{printf("Input the sides of triangle \n");
scanf("%d %d %d",&a,&b,&c);}while(t_check(a,b,c)==0);

if(eq(a,b,c))
printf("\n Equilateral");

else if(iso(a,b,c) && right(a,b,c))
printf("\n Iso and Right");

else if(iso(a,b,c))
printf("\n Iso ");

else if(right(a,b,c))
printf("\n Right");

else
printf("Scalene");

return 0;
}



























 
