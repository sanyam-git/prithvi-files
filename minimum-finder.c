// a program to find minimum number from three entered

#include<stdio.h>

int main()

{int a,b,c;
printf("Enter a,b,c \n");
scanf("%d %d %d", &a, &b, &c);

if(a>b && a>c)
{
printf("A is the greatest");
}

else if(b>a && b>c)
{
printf(" B is the greatest");
}

else if(c>a && c>b)
{
printf("C is the greatest");
}

return 0 ;
}
