#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()

{
int n=100;
//scanf("%d",&n);
srand(time(0));
for(int i=0;i<n;i++)
printf("%d\n",rand()%256);

return 0;
}
