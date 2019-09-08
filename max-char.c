#include<stdio.h>
#include<stdlib.h>
#define N 10000


int main()

{
int i;char para[N];

printf("Enter the para\n"); scanf("%[^\n]",para);
int f_char[128]={0};

for(i=0;i<N;i++)
{
if(para[i]=='\0') break;
f_char[(int)para[i]]++;
}
//finding max
int freq=0,max=0;

for(i=0;i<128;i++)
if(f_char[i]>freq) {max=i;freq=f_char[i];}

printf("Maximum is %c \n and %d times",max,freq);
return 0;
}



