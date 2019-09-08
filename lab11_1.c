#include<stdio.h>
#include<stdlib.h>
int main()

{
int input;
int i,j;

printf("Input the total no. of elements you want to enter\n");scanf("%d",&input);
int iarr[input];
int pos=0;

for(i=0;i<input;i++)
{scanf("%d",&iarr[i]);
if(iarr[i]>0) pos++;}


int oarr[pos];

//oarr=malloc(sizeof(int)*pos);

for(i=0,j=0;i<input;i++)
{
if(iarr[i]>0) {oarr[j]=iarr[i];j++;}
}

printf("\n Output \n");
for(i=0;i<pos;i++)
{printf("%d\n",oarr[i]*oarr[i]);}

return 0;
}

