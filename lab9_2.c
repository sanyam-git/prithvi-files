#include<stdio.h>
#define pi 3.14

void circleData(int r,float *p,float *a)
{*p=(2*pi*r);*a=(pi*r*r);}

int main()
{int r;float a,p;
printf("radius of circle \n");
scanf("%d",&r);

circleData(r,&p,&a);

printf("Area is %f \n",a);
printf("Perimetr is %f",p);

return 0;
}
