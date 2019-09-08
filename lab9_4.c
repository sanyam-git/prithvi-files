#include<stdio.h>

void get_denom(int n,int *n2000,int *n500,int *n100)
{
*n2000=n/2000;n=n%2000;
*n500=n/500;n=n%500;
*n100=n/100;
}

int main()

{int n,n2000,n500,n100; 

do{
printf("Enter the amount in multiples of 100 \n");
scanf("%d",&n);}while(n%100!=0);

get_denom(n,&n2000,&n500,&n100);

printf("\n No. of 2000 notes %d",n2000);
printf("\n No. of 500 notes %d",n500);
printf("\n No. of 100 notes %d",n100);

return 0;
}
