#include<stdio.h>

int isArmstrong(int n)
{int cube=0,i,j=n;
	for(;n>0;)
	{i=n%10;
	cube+=(i*i*i);
	n=n/10;}
int flag=0;
if(j==cube)flag=1;
return flag;
} 


int main()
{int n,i;
do{printf("Input the number till checked \n");
scanf("%d",&n);}while(n<10);

for(i=10;i<=n;i++)
{if(isArmstrong(i))printf("%d \n",i);}
//else printf("Not ARMSTRONG");

return 0;
}


