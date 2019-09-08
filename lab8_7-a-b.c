
// I have used a wrong spelling of frquency in the whole programme... 'frequecy'
#include<stdio.h>

int main()

{
char name[20];
int i=0;
do{
name[i]=getchar();i++;
}while(name[i-1]!='\n' && i!=19);
//for(;((name[i]=getchar())!='\n')&&(i<20);i++);
name[i]='\0';

//printing the array
int j;
for(j=0;j<i+1;j++)
printf("%c",name[j]);
//Part (B)
//printf(" %d",(int)(name[3]));

int frequecy[26]={0};
//printf("zumba %d",frequecy[23]);
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


