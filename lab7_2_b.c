#include<stdio.h>

int main()

{
int a,b,i,j,res=0;
printf("Enter the value of a \n");
scanf("%d",&a);
do{printf("Enter the value of b (such that b>a) \n");
scanf("%d",&b);}while(a>=b);
for(i=a;i<=b;i++)
{
if(i%2==0)
;
else
{j=((i%3==0) || (i%5==0));
switch (j)
{ case 1 : res+=i;break;
}}}
printf(" Sum of all numbers from %d to %d ,which are multiples of 3 and 5 are; is %d",a,b,res);
return 0;
}
