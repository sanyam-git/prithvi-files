//a programme to verify the famous goldback conjecture TILL EVEN NUMBER INPUT BY USER
#include<stdio.h>
#include<math.h>

int isPrime(int);



int main()
{//taking input
int n,i=2,j,k,f;
do{printf("Input an even number greater than 2 \n ");
scanf("%d",&k);}while((k%2!=0) || (k<=2));

for(f=4;f<=k;)
{n=f;
for(i=2;i<=n/2;i++)
{j=n-i;
if( isPrime(j) && isPrime(i))
{printf("\n %d is sum of %d and %d \n \n",n,i,j);
break;}
}
f+=2;
}
return 0;
}

int isPrime(int n)
{int i,flag=1;
for(i=2;i<=sqrt(n);i++)
{if(n%i==0)
{flag=0;
break;}
}
return flag;}
