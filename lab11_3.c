#include<stdio.h>
#include<stdlib.h>

int main()

{int row,i,j;
//taking input no. of rows
scanf("%d",&row);
int *arr[row];
int arr_col[row];

for(i=0;i<10;i++)
{	scanf("%d",&arr_col[i]);
	arr[i]=(int *)malloc(arr_col[i]*sizeof(int));
	for(j=0;j<arr_col[i];j++)
	{scanf("%d",&arr[i][j]);}
}

//printing
for(i=0;i<10;i++)
	{for(j=0;j<arr_col[i];j++)
	printf("%d ",arr[i][j]);
	printf("\n");
	}


return 0;
}
