#include<stdio.h>
int main()

{int n,row,col,i,j;
do{printf("Enter the no. of rows(odd)\n");
scanf("%d",&n);}while(n%2==0);

i=(n+1)/2;
int x=n-2;
int y=(n+1)/2;

for(row=1;row<=((n+1)/2);row++)
{int k=(n+1)/2;


  for(col=1;col<=row;col++)
  {printf(" %d",k);k--;}

  for(j=1;x>=j;j++)
  {printf(" %d",i);}
  i--;
  x-=2;
int z;
   z=y;
  for(col=1;col<=row;col++)
  {
   if(row==((n+1)/2) && col==1)
   {z++; continue;}
  else printf(" %d",z);z++;
  }
  y--;

printf("\n");
}
return 0;
}
