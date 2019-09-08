#include<stdio.h>

int notes(int *n,int i)
{int nos=(*n)/i;
*n=*n%i;
return nos; }


int main()
{int n;

printf("Enter the value \n");
scanf("%d",&n);

int t500,t100,t50,t10,t5,t1;

printf("%d \n",t500=notes(&n,500));
t100=notes(&n,100);
t50=notes(&n,50);
t10=notes(&n,10);
t5=notes(&n,5);
printf("%d \n",t1=notes(&n,1));
return 0;
}


