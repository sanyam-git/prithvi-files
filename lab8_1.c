#include<stdio.h>

int printHailstones(int val);

int main()
{int n;
printf("Enter the first term of sequence\n");
scanf("%d",&n);

printf("Number of terms in hailstones sequence %d ",printHailstones(n));
return 0;
}


int printHailstones(int val)
{int num=1;
do
{
if(val%2==0)
{val=val/2;num++;}
else
{val=3*val+1;num++;}

if(val==1)
break;
else
;
}while(val>-5000);
return num;
}

