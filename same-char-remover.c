#include<stdio.h>

int main()

{char input[30];int flag[30]={};
printf("Input: \n");scanf("%s",input);
int i,j;
for(i=0;i<30;i++)
{if(flag[i]) continue;
else
	for(j=i+1;j<30;j++)
	if(input[i]==input[j]) flag[j]=1;
}
//for(i=0;i<30;i++) printf("%d",flag[i]);
//printf("%s",input);
char output[30];
for(i=0,j=0;i<30;i++)
{
if(!flag[i]) {output[j]=input[i];j++;}
}

printf("\n output is :%s \n",output);

return 0;
}
