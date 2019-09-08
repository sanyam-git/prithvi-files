#include<stdio.h>
#include<math.h>

int main()

{
int a,b,c;
float s,ar;
printf("Enter side a,b,c with spaces between them.");
scanf("%d %d %d",&a,&b,&c);
s = (a+b+c)/2;
ar = sqrt(s*(s-a)*(s-b)*(s-c));
printf("Area = %f " ,ar);
return 0 ;
}

