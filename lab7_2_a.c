#include<stdio.h>

int main()

{
int a,b,i,res=0;
printf("Enter the value of a \n");
scanf("%d",&a);
do{printf("Enter the value of b (such that b>a) \n");
scanf("%d",&b);}while(a>=b);
for(i=a;i<=b;i++)
{
switch(i%2)
{case 0: ;break;
default : res+=i;}}
printf(" Sum of all numbers from %d to %d is %d",a,b,res);
return 0;
}
