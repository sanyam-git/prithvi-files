#include<stdio.h>

int main()
{
int m;
printf("Enter the monthe number (1 for Jan) \n");
scanf("%d",&m);
switch(m)
{case 12: 
case 1: 
case 2: printf("Winter");
break;
case 3: 
case 4:
case 5: printf("Spring");
break;
case 6: 
case 7: 
case 8: printf("Summer");
break;
case 9: 
case 10: 
case 11: printf("Autmn");
break;
default: printf("Not a valid month number");
break;}
return 0;
}

