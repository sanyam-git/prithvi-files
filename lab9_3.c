// I have used a wrong spelling of frquency in the whole programme... 'frequecy'
#include<stdio.h>

int main()

{
char name[50];
int i=0;

printf("Input the name.Press enter after entering \n ");
//taking input
do{
name[i]=getchar();i++;
}while(name[i-1]!='\n' && i!=19);
name[i]='\0';//adding null character at last
//scanf("%s",name);

printf("\n You entered %s \n",name);

int j;
int frequecy[26]={0};
int k;
for(j=0;j<i-1;j++)
{k=(int)(name[j]);

if(k<91)
	k=k-65;
else if(k>96)
	k=k-97;

(frequecy[k])++;}
k=0;
for(j=65;j<90;j++)
{if(frequecy[k]>0)
printf("\n %c -- %d \n",(char)(j),frequecy[k]);
k++;
}
return 0;
}


