#include<stdio.h>

int main()

{
int a,b,c,d,i,j,k,l,res=0;
printf("Input the number a, b, c, d (in that order with spaces) \n ");
scanf("%d%d%d%d",&a,&b,&c,&d);


if(a>b)              //roudn1
{i=a;k=b;}
else
{i=b,k=a;}

if(c>d)                //round 2
{j=c;l=d;}
else
{j=d,l=c;}

if(i>j)
{res=i;}
else
{res=j;
j=i;}
// comparing three remaining

if(j>k && j>l)
{res=res+j;}

else if(k>j && k>l)
{res=res+k;}

else
{res=res+l;}

printf("The sum of two largest numbers from %d , %d , %d , %d is %d ", a,b,c,d,res);
return 0;
}






