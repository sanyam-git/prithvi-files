#include<stdio.h>

int main()

{
char sign;
int i,j,res;
do{printf("Enter the math sign \n ");
scanf("%c",&sign);}while(sign!='+'&& sign!='-' && sign!='*' && sign!='/' && sign!='%' );

printf("Enter the integer 1 \n ");
scanf("%d",&i);

printf("Enter the integer 2 \n  ");
scanf("%d",&j);


if((sign=='/' || sign=='%')&&(j==0))
{
do{printf("Enter the integer 2 (enter a non-zero number) \n");
scanf("%d",&j);}while(j==0);
}

if (sign=='+')
{res=i+j;
printf("The addition of %d and %d is %d",i,j,res);}

else if (sign=='-')
{res=i-j;
printf("The subtration of %d and %d is %d",i,j,res);}

else if (sign=='*')
{res=i*j;
printf("The multiplication of %d and %d is %d",i,j,res);}

else if (sign=='/')
{res=i/j;
printf("The quotiend (integer division)  of %d and %d is %d",i,j,res);}

else if (sign=='%')
{res=i%j;
printf("The remainder of %d divided by %d is %d",i,j,res);}

else
{printf("Invalid Operation");}

return 0;
}

