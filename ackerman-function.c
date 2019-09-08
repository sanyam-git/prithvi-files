#include<stdio.h>

int ack(int m,int n)
{
int res;
if(m==0)
res=n+1;
else if(n==0 && m!=0)
res=ack(m-1 ,1);
else 
res=ack(m-1 , ack(m,n-1));

return res;
}

int main()
{int m,n;
printf("Input m \n");
scanf("%d",&m);
printf("Input n \n");
scanf("%d",&n);
printf("Value of ack(%d,%d) is %d",m,n,ack(m,n));
return 0;
}

