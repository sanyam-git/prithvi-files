#include<stdio.h>
int main()
{
float a,b,prod;
printf("Enter value of a: ");
scanf("%f",&a);   //reading user input for variable a
printf("Enter value of b : ");
scanf("%f",&b);   //reading user input for variable b
prod=a*b;
printf("Product of %.2f and %.2f is : %.4f \n", a,b,prod);
return 0;
} 
