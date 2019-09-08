#include<stdio.h>
#include<stdlib.h>
#define N 10000


int main()

{
char para[N];

printf("Enter");scanf("%[^\n]",para);

//printf("%s",para);
int words=0,i,j,flag=0;

for(i=0;i<N;i++)
{
	if((65<=(int)(para[i]) && 90>=(int)(para[i]) )|| (97<=(int)(para[i]) && 122>=(int)(para[i])))
	{flag=1;continue;}
else if(para[i]=='\0') break;

else{
	if(flag){words++;flag=0;}else continue;
	}
}
if(flag==1) words++;
printf("\n Total no. of words is %d",words);

int space=0,alphan=0;
// total no. of characters===
for(i=0;;i++)
{if(para[i]=='\0') break;
else if((int)(para[i]==32)) space++;
alphan++;}

printf("\nCharacter(with spaces) %d\n Characters without including spaces %d\n " , alphan,alphan-space);



return 0;
}
