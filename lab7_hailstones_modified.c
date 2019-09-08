#include <stdio.h>

int main()
{
  int val,a,b, term, count;

  do{printf("Enter the value to start hailstone sequence: \n ");
  scanf("%d",&val);}while(val<=0);
  do{printf("Enter the lower bound value of range [a,b]: \n ");
  scanf("%d",&a);}while(a<=0);
  do{do{printf("Enter the upper bound value of range {a,b}: \n ");
scanf("%d",&b);}while(b<=0);}while(b<=a);
  

  count = 1;	
  printf("%d\n", val);
  for (term = val; term != 1; )
  {
     if (term % 2 == 0) 
        term = term / 2;
     else 
        term = (3 * term) + 1;
if(term>=a && term <=b)     
{printf("%d\n", term);
printf("\n Hailstorm sequence terminated at %d as it lies between the range [ %d , %d]",term,a,b);
count++;break;}
     else
{count++;
printf("%d\n", term);
  }} 

  printf(" \n Number of terms = %d\n",count);
  return 0;
}
