#include<stdio.h>
#include<math.h>

int main()

{
int n,i,k, isPrime=1 , num_primes=0,sum=0;
do{
printf("Enter a natural no. greater than one \n");
scanf("%d",&n);}while(n<=1);
for(k=2;k<=n;k=k+1)
{
for(i=2;i<=sqrt(k);i=i+1)
{if(k%i==0)
{num_primes++;
sum=sum+k;
break;}
else
;
}
}
num_primes=(n-1-num_primes);
sum=(((n*(n+1))/2)-1-sum);
printf("Number of Prime numbers from 2 to % d are %d \n Sum of all primes is %d",n,num_primes,sum);
return 0;
}

