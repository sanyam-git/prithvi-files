#include<stdio.h>
void insertionSort(int arr[], int n)
{int key,i,j;
for(i=1;i<=n-1;i++)
{key=arr[i];
j=i-1;

	while(j>=0 && arr[j]>key)
	{
	arr[j+1]=arr[j];
	j=j-1;
	}
arr[j+1]=key;
	
}
}

int main()
{int n,i,j;
printf("Total no. of elements\n");scanf("%d",&n);
int arr[n];

for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
insertionSort(arr,n);
printf("Output\n");
for(i=0;i<n;i++)
printf("%d\n",arr[i]);

return 0;
}

