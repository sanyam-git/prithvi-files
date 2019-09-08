#include<stdio.h>
#define N 100  //change N as per requirement
#define low 0 //range both inclusive
#define high 255

int main()

{int i,j;unsigned int val;
char marks[N]={};
printf("Input marks \n");
for(i=0;i<N;i++)
	{scanf("%u",&val);marks[i]=val;}

int array[256]={};
for(i=0;i<256;i++)
	array[i]=0;
//printf(" %c ",marks[3]);
/*int max=0;
for(i=0;i<N;i++)
	{if (marks[i]>max) max=marks[i];}
printf("\n \n Max is %d",max);*/

//printf("\n Press '1' to start : \n\n");
//scanf("%d",&val);


for(i=0;i<N;i++)
	{j=marks[i];(array[j])++;}

for(i=0;i<256;i++)
{	for(j=0;j<array[i];j++)
	printf("\n %d",i);
}

return 0;
}
