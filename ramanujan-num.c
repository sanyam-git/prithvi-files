
#include<stdio.h>
#include<math.h>

int main()

{
int n,i=1,j=1,res=1728,f=0,num;
do{printf("Enter the number upto which you want to calculate Ramanujan Number \n");
scanf("%d",&n);}while(n<=0);
do{i=1;f=0;
do{
j=1;
do{
num=(i*i*i)+(j*j*j);
if(num==res)
{f++;
break;}
else
j++;}while(j<= cbrt(res));
i++;
if(f>2)
{printf(" %d \n",res);break;}
else
;
}while(i<= cbrt(res));
res++;}while(res<=n);

return 0;
}


