#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 50

int main()

{	struct student
	{char name[MAX];
	int count;
	int length;
	};

int i,val;char temp[100];
scanf("%d",&val);getchar();
struct student arr[val];

for(i=0;i<val;i++)
{scanf("%s",arr[i].name);}

int flag_arr[val],j;
for(i=0;i<val;i++) {flag_arr[i]=1;arr[i].count=0;}


for(i=0;i<val;i++)
{
if(flag_arr[i])
	for(j=i+1;j<val;j++)
	if(!strcmp(arr[i].name,arr[j].name))
	{(arr[i].count)++; flag_arr[j]=0;}
}
int count=0;
for(i=0;i<val;i++) 
if(flag_arr[i])
{//printf("%d. %s\n",count,arr[i].name);
count++;}

//creating a new list with unique names
struct student new_arr[count];j=0;

i=0;	for(;j<val;j++)  
	if(flag_arr[j])
	{strcpy(new_arr[i].name,arr[j].name);
	new_arr[i].count=arr[j].count;i++;
	}
int tempo;
for(i=0;i<count-1;i++)
{
	for(j=i+1;j<count;j++)
{if(strcmp(new_arr[i].name,new_arr[j].name)>0)
	{strcpy(temp,new_arr[i].name);
	tempo=new_arr[i].count;
	strcpy(new_arr[i].name,new_arr[j].name);
	new_arr[i].count=new_arr[j].count;
	new_arr[j].count=tempo;
	strcpy(new_arr[j].name,temp);
	
}
}
}

printf("Name\tFrequency\n");
for(i=0;i<count;i++)
printf("%d.\t%s\t\t[%d]\n",i+1,new_arr[i].name,new_arr[i].count+1);
int max=-1,index;
for(i=0;i<count;i++)
if(new_arr[i].count>max)
{
max=new_arr[i].count;
index=i;
}
printf("\n\n");
printf("The most frequency name is %s with frequency as [%d]",new_arr[index].name,new_arr[index].count+1);





return 0;
}
