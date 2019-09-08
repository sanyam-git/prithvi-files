#include<stdio.h>
int main()

{
int n,row,col,i;
printf("No. of rows \n");
scanf("%d",&n);

int k=0;
for(row=1;row<=n;row++)
{
 for(int j=1;j<=k;j++)
{printf(" ");
}
k=k+2;

for(col=1;col<=(2*(n+1-row)-1);col++)
{printf(" *");}

printf("\n");
}
return 0;
}
