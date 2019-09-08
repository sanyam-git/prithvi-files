#include<stdio.h>

void main()
{
	FILE *w;
	int i;
	printf("Enter no. of people");
	scanf("%d",&i);
	w=fopen("rate","w");
	for(int j=0;j<i;j++)
	{
		fprintf(w,"1400\n");
	}
}
	
