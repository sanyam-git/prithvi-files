//a program to convert input amount to minimum number of possible notes of 2000,500 and 100 combinations.
#include<stdio.h>

int main()

{
int n,pink,yellow,purple;

printf("input amount (in multiples of 100)");
scanf("%d",&n);

pink=n/2000;
yellow=(n%2000)/500;
purple=((n%2000)%500)/100;

printf("No. of notes %d %d %d", pink, yellow, purple);
return 0;
}

