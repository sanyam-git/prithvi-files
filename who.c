#include<stdio.h>

int main()
{FILE *fp;
fp=fopen("zame.txt","r");
char temp;
int count=0;
while(temp!='g')
{
fscanf(fp,"%c",&temp);
if(temp=='f') count++;
}
printf("%d",count);

fclose(fp);
return 0;
}
