#include<stdio.h>
#include<ctype.h>



int main()
{
char name[100];

printf("Input the string\n");scanf("%s",name);

int i;
for(i=0;i<100;i++)
{if(name[i]=='\0') break;

name[i]=tolower(name[i]);}

printf("\n %s",name);

return 0;
} 
