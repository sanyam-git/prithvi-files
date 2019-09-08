#include<stdio.h>
#include<string.h>

int main()
{int val,t; scanf("%d %d",&val,&t);
getchar();
//taking input
int i;
struct name{
char name[70];
int freq; 
int len;
};
int count=0;
struct name arr[val];
for(i=0;i<val;i++)
{
scanf("%s",arr[i].name);
scanf("%d",&arr[i].freq);
arr[i].len=strlen(arr[i].name);
getchar();
if(arr[i].len<=t) count+=arr[i].freq;
}

printf("PERCETAGE is :\n%0.2f\n",(count/(float)val)*100.00);
}

