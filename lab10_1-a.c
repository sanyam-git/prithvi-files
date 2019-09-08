//converting string to lower case letters  LIMIT 100
#include<stdio.h>
void convertLower(int name[])
{int i,j;
for(i=0;i<100;i++)
{
if(name[i]==48) break;
if(!((name[i])>=65&& (name[i])<=90)) continue;
else name[i]=name[i]+32;
}
}



int main()
{char cname[100];
printf("Input the string\n");scanf("%s",cname);
int i;int name[100]={0};

for(i=0;i<100;i++) //nalpha
{if(cname[i]=='\0') break;
name[i]=((int)cname[i]);}

convertLower(name);

for(i=0;i<100;i++)  //kalpha
{if(name[i]==48)break;
else cname[i]=((char)name[i]);}

//output
printf("\n %s",cname);
return 0;
}
