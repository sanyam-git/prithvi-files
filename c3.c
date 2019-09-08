#include<stdio.h>
#define N 3

int main()

{int arr[N][N]={1,0,0,2,3,7,4,5,8};

//N is the order of matrix
int count=0,i,j,flag=1;

for(i=0,j=0;i<N && j<N; )
{
	if(j>i && arr[i][j]!=0) { flag=0;break;}
	
	count++;j++;
	
	if(count==N) {i++;count=0;j=0;}
}

printf("%d",flag);
return 0;
}
