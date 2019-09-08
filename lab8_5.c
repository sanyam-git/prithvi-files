#include<stdio.h>

int main()

{int n,i,x;


do{printf("Total no. of integers you want to input\n");
scanf("%d",&n);}while(n<=0);

int array[n];

printf("You have to enter %d integers\n",n);

for(i=0;i<n;i++)
{
printf("Enter %dst integer",i+1);
scanf("%d",&array[i]);
}

printf("You enetered %d integers \n Now enter the number'x' for which you have to search and see the frequency\n",n);
scanf("%d",&x);

int j=0;

for(i=0;i<n;i++)
{
	if(array[i]==x)
	j++;
else
;
}
printf("%d",j);
if(n>0)
printf("The number %d appeared %d times in the input integers",x,j);

else
printf("%d never appears in the list",x);

return 0;

}




