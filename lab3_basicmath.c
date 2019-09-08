#include<stdio.h>
int main()
{
float a,b,sum,prod,quot,diff;  //declaring input and output variables

printf("Input the value of a: \n ");
scanf("%f",&a);       //taking user input for value of a


printf("Input the value of b: \n ");
scanf("%f",&b);       //taking user input for value of b

sum=a+b;   //performing operations on the input valuse
prod=a*b;
quot=a/b;
diff=a-b;

printf("The addition of %.2f  and %.2f  is %.4f \n",a,b,sum); //displaying the results to user
printf("The product of %.2f  and %.2f  is %.4f \n",a,b,prod);
printf("The quotient of %.2f  and %.2f  is %.4f \n",a,b,quot);
printf("The difference of %.2f  and %.2f  is %.4f \n",a,b,diff);

return 0;
}
