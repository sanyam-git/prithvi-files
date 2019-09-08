#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define N 380000
int main()

{int i,j;
char arr[26];
for(i=0;i<26;i++)
{arr[i]=(char)(i+65);}
int s;int x=0;
//printf("\n");
for(x=0;x<100;x++)
{printf("380000\n");
for(i=0;i<N;i++)
{for(j=0;j<9;j++)
{s=(rand()%26);printf("%c",arr[s]);}printf("\n");}
}

return 0;
}
