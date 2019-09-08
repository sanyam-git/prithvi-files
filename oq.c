#include<stdio.h>
#include<string.h>

int main()

{
char input[100]="hellobitspilaniitsbitshurraybitsmagic",anchor[10]="bits";
//char temp[100];
//strcpy(temp,input);
char *p1;
p1=strstr(input,anchor);
int start=strlen(input)-strlen(p1);
int i;
char *temp,*p2;
p2=strstr(input,"");
for(;;)
{	temp=strstr(,"");

p2=strstr(p2,anchor);
if(p2==NULL) break;
}

for(i=0;i<start;i++)
printf("%c",input[i]);
printf("%s",temp);

return 0;
}

