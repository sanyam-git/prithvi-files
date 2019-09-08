//I don't know what 
#include<stdio.h>

int main()
{int z,i,j;
//or you can take inpu
int array[8]={1000,78,-8,987328,6,0,5,5};

for(i=0;i<8;i++)
{

	for(j=i+1;j<8;j++)
	{if(array[i]>array[j])
	{z=array[i];array[i]=array[j];array[j]=z;}
	}
}

for(i=0;i<8;i++)
{printf("\n %d",array[i]);}
return 0;}

