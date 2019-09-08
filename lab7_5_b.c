#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()

{
int i=1, n, seed;
for(;i<=5;i++)
{seed = time(NULL);
srand(seed);
printf("%d \n",rand());
}
return 0;
}

