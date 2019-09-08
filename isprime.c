#include<stdio.h>

int main()
:nt isPrime(int n)
{int i,flag=1;
for(i=2;i<=sqrt(n);i++)
{if(n%i==0)
{flag=0;
break;}
}
return flag;}
