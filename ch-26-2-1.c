#include<stdio.h>
#define n 7

int main()
{int i,j;
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	(j==0 || j==i || j==(n-1) || j+i==(n-1))?printf("* "):printf("  ");
printf("\n");
}
return 0;
}
