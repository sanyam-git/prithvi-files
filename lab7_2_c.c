#include<stdio.h>
int main()

{
int N,i=1,j,res=0;
do{printf("Enter the value of N \n");
scanf("%d",&N);}while(N<=0);
for(;i>0;)
{j=res+i;
if (j<=N)
{res=res+i;
i=i+2;}
else
{break;}
}
i=i-2;
printf("Sum of all odd numbers such that it is less than %d is %d (sum from 1 to %d)",N,res,i);
return 0;
}

