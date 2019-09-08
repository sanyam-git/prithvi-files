#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define N 38000000
int main()

{int i,j;
char arr[52];
for(i=0;i<26;i++)
{arr[i]=(char)(i+65);}
int x;
for(i=26;i<52;i++)
{arr[i]=(char)(i+71);}


int s;int k;
//printf("\n");

//printf("380000\n");
for(i=0;i<N;i++)
{k=(rand()%9)+1;

for(j=0;j<k;j++)
{s=(rand()%52);printf("%c",arr[s]);}
printf("\n");
}




return 0;
}
