#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()

{
int m,n;int i,j;
int tr[100][6]={0};int min=0;
printf("Enter value of m and n\n");scanf("%d %d",&m,&n);

//int tr[100][6]={0};
//taling input for matrix

for(i=0;i<100;i++)
{for(j=0;j<6;j++) scanf("%d",&tr[i][j]);}

//maximum amount of withdarwan


for(i=0;i<100;i++)
{

for(j=0;j<6;j++) 
{if(tr[i][j]<=min) min=tr[i][j];}

}
min=(-1*min);
printf("\n Maximum withdal is %d \n",min);

//branch with max no. of deposits
int max=0,branch;
int dep[100]={0};
for(i=0;i<100;i++)
{for(j=0;j<6;j++) if(tr[i][j]>0) dep[i]+=tr[i][j];}

for(i=0;i<100;i++)
{if(dep[i]>max) {max=dep[i];branch=i;}}
printf("Branch no. %d get max deposites worth Rs. %d",branch,max);
//making all values absolute
for(i=0;i<100;i++)
{for(j=0;j<6;j++) tr[i][j]=abs(tr[i][j]);}

int total[100]={0};

for(i=0;i<100;i++)
{for(j=0;j<6;j++) total[i]+=tr[i][j];}

max=0;

for(i=0;i<100;i++)
{if(total[i]>max) {max=total[i];branch=i;}}


printf("\n Total transaction Rs. %d in Branch Number %d",max,branch);
















return 0;
}
