#include<stdio.h>
#include<stdlib.h>

int main()

{
int m,n;
//taking input of m no. of rows
scanf("%d",&m);
int *arr[m];
//taking no. columns
scanf("%d",&n);
int i,j;
for(i=0;i<m;i++)
 arr[i]=(int *)malloc(n*sizeof(int));

for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&arr[i][j]);
for(i=0;i<m;i++)
{	for(j=0;j<n;j++)

printf("%d  ",arr[i][j]);
printf("\n");}



return 0;
}







































