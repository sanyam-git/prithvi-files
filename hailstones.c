#include<stdio.h>
int main()
{

int n,i;
do{i=0;
do{printf("\nInput\n");scanf("%d",&n);}while(n<0);
do{
if(n%2==0)n=n/2;
else n=3*n+1;
printf("\n %d count is %d ",n,i+1);i++;}while(n!=1);
}while(n>0);
return 0;
}
