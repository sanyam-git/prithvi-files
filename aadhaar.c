#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int check(int s,int flag[12])
{int num=1;
if(flag[s]==0) num=0;
return num;
}


int main()

{char num[13];
int N;scanf("%d",&N);getchar();
scanf("%s",num);
int i,j;char temp[13];
for(i=0;i<N;i++)
{
int flag[12];
for(i=0;i<12;i++) flag[i]=1;
//char temp[13];
for(j=0;j<12;j++)
{	int s=rand();
	
	s=s%12;

temp[j]=num[s];flag[s]=0;
}
printf("%s",temp);

}


return 0;
}
