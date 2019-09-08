#include<stdio.h>
#include<math.h>

int main()

{
int n;
double i,res=0;
printf("Number of terms \n");
scanf("%d",&n);

int j=0;
for(i=1.0000000;i<=n;i=i+2)
{
res=(pow(-1,j))/i+res;
j++;
}
printf("Value of pi till %d terms is \n  %lf",n,4*res);
return 0;
}
