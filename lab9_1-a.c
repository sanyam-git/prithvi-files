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
{int n;
do{printf("input the number to be checked /n");
scanf("%d",&n);}while(n<10);

if(isArmstrong(n))printf("This is ARMSTRONG");
else printf("Not ARMSTRONG");

return 0;
}


