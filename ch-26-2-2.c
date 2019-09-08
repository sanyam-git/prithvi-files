#include<stdio.h>

int main()
{
int n,i,j,res;
//use a do-while loop to get n>0
printf("Input the limit number \n");
scanf("%d",&n);

i=1,res=0;
do
{j=res+i*i;
	if(j>=n)
        break;
	res=j;
        i++;

}while(n>0);


printf("The value is till %d ,which is %d less than %d",--i,res,n);

return 0;
}
