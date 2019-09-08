#include<stdio.h>

int main()

{
int n=4,i=1,res=1;
do{printf("Enter a number \n");
scanf("%d",&n);}while(n<=0);

do{res=(res*i);i++;}while(i<=n);

printf("Value of %d! is %d",n,res);
return 0;
}

