//remember to include the case when including the number itself also as its prime factor . Ex. As 23 is the only prime factor of 23
#include<stdio.h>
#include<math.h>


int isPrime(int n);

int main()
{int n,i;

printf("Input n \n");
scanf("%d",&n);

printf("The prime factors of %d are : ",n);
for(i=2;i<=sqrt(n);i++)
{if(n%i==0 && isPrime(i))
printf("%d \n",i);
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

