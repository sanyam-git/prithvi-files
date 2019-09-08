#include<stdio.h>
#include<math.h>

int main()

{float a,b,c,alpha,beta;

printf("Enter the coefficient of x^2 (a) \n");
scanf("%f",&a);
for(;a==0;)
{printf("Enter the coefficient of x^2 (a) \n");
scanf("%f",&a);}

printf("Enter the coefficient of x (b) \n");
scanf("%f",&b);

printf("Enter the constant (c) \n");
scanf("%f",&c);

alpha=b*b-4*a*c; //checking the value for real roots

if(alpha<0) // when roots are complex
{printf("No real roots exist for the given quadratic equation");
}
else //calculating roots
{beta=(-b+sqrt(alpha))/2*a;
alpha=(-b-sqrt(alpha))/2*a;

printf("Roots of %.1fx^2+%0.1fx+%0.1f are \n %0.1f and %0.1f",a,b,c,alpha,beta);} //displaying results output
return 0 ;
}

