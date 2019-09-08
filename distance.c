#include<stdio.h>
int main()

{
int a,t,u; //declaring input variables
float d;

printf("Input the initial velocity \n"); 
scanf("%d",&u); //taking user input

printf("Input the acceleration \n"); 
scanf("%d",&a); //taking user input

printf("Input the time duration \n"); 
scanf("%d",&t); //taking user input

d=u*t+0.5*a*t*t;  //calculating distance 

printf("Distance travelled is %.2f units", d);   //displaying output

return 0;

}
