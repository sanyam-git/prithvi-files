#include<stdio.h>

int main()

{
int n,i,j,k,res;
printf("Input \n");
scanf("%d",&n);
for(i=1,j=0,k=1;i<=n;i++)
{res=j+k;
printf(" %d \n",res);
j=k;
k=res;
}
return 0;
}
