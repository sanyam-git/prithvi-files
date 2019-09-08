#include<stdio.h>

int main()

{int n=8;
int input[8]={-10,2,3,-2,0,5,-15,0};
int max=0;int sum=0;
int start,stop;
int i,j,k;

for(i=0;i<n;i++)
{	for(j=i+1;j<n;j++)

	{sum=0;
	for(k=i;k<=j;k++)
		{sum+=input[k];
		if(sum>max) {start=i;stop=j;max=sum;}
		}
	}
}
printf("%d and %d and Sum is %d",start,stop,max);

return 0;
}


