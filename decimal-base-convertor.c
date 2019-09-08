#include<stdio.h>
#include<math.h>

int main()

{
int n,k,r;
int j=-1;
int res=0;

printf("Input n (decimal no.- positive) ");
scanf("%d",&n);
printf("Input r (base - 0<r<10) ");
scanf("%d",&r);

for(;n>0;)
{
j=j+1;
k=n%r;
n=n/r;
res=res+(k*pow(10,j));
}
printf("Conversion is %d ", res);

return 0;
}




