//valid till some n=20 only, esle value overflow will occur
//Good Night

#include<stdio.h>


int ncr(int n,int r);



int main()
{int l,n,i,j,k,res;
printf("Enter the number of rows \n ");
scanf("%d",&n);
k=n;
l=n;
for(i=0;i<=(n-1);i++)
{
for(j=0,k=k-1;j<k;j++)
printf(" ");

for(j=0;i>=j;j++)
{res=ncr(i,j);
printf(" %d",res);}

for(j=0,l=l-1;j<l;j++)
printf(" ");

printf("\n");
}
return 0;
}

int ncr(int n,int r)
{int res,i,sres;

if(n==0 ||r==0 || n==r)
{res=1;sres=1;}
else if(r==0 || n==r)
{res=n;sres=1;}

else{
if(n-r<r)
{r=n-r;}

for(i=1,res=1;i<=r;i++)
{res=(res*n);
n=n-1;
}

for(i=1,sres=1;i<=r;i++)
{sres=sres*i;
}
}
return (res/sres);
}
