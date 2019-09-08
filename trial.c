#include<stdio.h>
#define MAX 4
void getPassengerTraffic(int arr[MAX][MAX])
{int i,j;

for(i=0;i<MAX;i++)
	for(j=0;j<MAX;j++)
	scanf("%d",&arr[i][j]);
}

int main()
{int arr[MAX][MAX];
getPassengerTraffic(arr);
int max=-1,i,j;
for(i=0;i<MAX;i++)
	for(j=0;j<MAX;j++)
	if(max<arr[i][j]) max=arr[i][j];

for(i=0;i<MAX;i++)
	for(j=0;j<MAX;j++)
	{if(max==arr[i][j]) 
	printf("Maximum people travel between City %d and %d \n",i,j);
	}

return 0;
}
