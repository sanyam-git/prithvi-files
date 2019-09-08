#include<stdio.h>

int main()

{
int n,i,k,res=0;
printf("Enter a four digit number \n");
scanf("%d",&k);

n=k;
i=n/1000;
res=res+i;
n=n%1000;

i=n/100;
res=res+(10*i);
n=n%100;

i=n/10;
res=res+(100*i);
n=n%10;

res=res+(1000*n);

//condition to check numb=eric palindrome
(k==res)?(printf("The number %d is same if read in reversed order",k)):(printf("The number %d is NOT if read in reversed order",k));

return 0;
}



