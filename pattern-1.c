//          1i
//        2 3 2
//      3 4 5 4 3
#include<stdio.h>
int main()

{
int nrow,row,col;
printf("Input no. of rows \n");
scanf("%d",&nrow);
int i=2*(nrow-1);
for(row=1;row<=nrow;row++)
{col=1;

for(;col<=i;col++)
{
printf(" ");
}
i=i-2;

col=1;
for(int l=row;col<=row;col++)
{
printf(" %d",l);
l++;

}
col=1;
for(int k=2*(row-1) ;col<=(row-1);col++)
{
printf(" %d",k);
k=k-1;
}
printf("\n");
}
return 0;
}
