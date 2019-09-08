//only small or capital letters
#include<stdio.h>

int main()

{
char main[40],sub[20];
int a=0,b=0,i,j;

printf("\n String A :\n");
for(a=0;a<40;a++)
{main[a]=getchar();if(main[a]=='\n') break;}

printf("\n String B :\n");
//getchar();
for(b=0;b<20;b++)
{sub[b]=getchar();if(sub[b]=='\n') break;}

i=0;
j=0;

int flag=0;
for(i=0;i<a;i++)
{j=0;
	if(main[i]==sub[0])
	{
		do{  if(main[i]==sub[j])
	             {i++;j++;flag=1;}
		     else
		     {flag=0;break;}}while(j<b);
        if(j>=b) flag=0;
	}
if(flag)
{break;}

i++;
}

if(flag==1)
printf("Yep is subset of ");
else
printf("Nope");
return 0;
}
	


