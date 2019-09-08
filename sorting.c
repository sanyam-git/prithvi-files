#include<stdio.h>

int main()
{

int l1,h1,num,i1;
printf("How many numbers do you want to sort - ");
scanf("%d",&num);

int arr[num];
printf("Please enter the %d values that you want to sort i.e. arrange in increasing order - ",num);

for(i1=0;i1<num;++i1)
scanf("%d",&arr[i1]);

for(i1=1;i1<num;++i1)
{

if(arr[i1]>=arr[i1-1])
continue;

if(arr[i1]<=arr[0])
{
  h1=0;
  goto swap;
}

for(l1=0,h1=i1-1;(h1-l1)!=1;)
{
   if(arr[i1]>=arr[(l1+h1+1)/2])
   l1=(l1+h1+1)/2;
   else if(arr[i1]<=arr[(l1+h1+1)/2])
   h1=(l1+h1+1)/2;
}

swap:

for(int j=i1-1;j>=h1;--j)
{
arr[j]=arr[j+1]+arr[j];
arr[j+1]=arr[j]-arr[j+1];
arr[j]=arr[j]-arr[j+1];
}

}
for(i1=0;i1<num;++i1)
printf("%d\n",arr[i1]);
//printf("%d ",arr[i1]);
//printf("\n");

return 0;
}
