#include<stdio.h>

int main()

{
int n,i;

do{printf("Enter the number of integers\n");
scanf("%d",&n);}while(n<=0 || n>100);

int nar[n];

printf("\n You will have to enter %d integers \n",n);

for(i=0;i<n;i++)
{
	printf("Enter the %d number \n",i+1);
	scanf("%d",&nar[i]);
}

printf("\n You input %d integers\n The square of these numbers\n",n);

for(i=0;i<n;i++)
printf("%d = %d \n",nar[i],nar[i]*nar[i]);

return 0;
}





