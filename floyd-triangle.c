#include<stdio.h>

int main()

{
int n,k=1,row,col;

printf("Enter the value\n");
scanf("%d",&n);

for(row=1;row<=n;row++)
{

for(int i=1;i<=row;i++)
{printf(" %d",k);
k++;
}
printf("\n");
}

return 0;
}
