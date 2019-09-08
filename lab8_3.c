#include<stdio.h>
// funiction declaration 
//The value will not be swaped till I use pointers in the given programme,which was not taught till this LAB-8 on 27/2
void my_fun(int x, int y)
{int z;
z = x; x = y; y = z;
return;
}

int main()
{
int a=100; int b=200;

printf("Value of a before my_fun() execute  %d \n",a);
printf("Value of b before my_fun() execute  %d \n",b);
my_fun(a,b);
printf("Value of a after my_fun() execute  %d \n",a);
printf("Value of b after my_fun() execute  %d \n",b);
return 0;
}
