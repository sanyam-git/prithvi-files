#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50

typedef struct student STUDENT;
typedef struct student
{
char name[MAX]; // MAX is #defined to 50
int count;
int length;
STUDENT *next;
}STUDENT;

STUDENT *addName(STUDENT *list, char *name)
{
STUDENT* new_node=malloc(sizeof(STUDENT));
strcpy(new_node->name,name);
new_node->next=(*list)

*list=new_node;
return list;
}

int main()
{int val; scanf("%d",&val);getchar();int i;

STUDENT *head=NULL;
char temp[100];

head=malloc(sizeof(STUDENT));

for(i=0;i<val;i++)
	{
	scanf("%s",temp);getchar(); 
	*head=addName(*head,temp);
	}
return 0;
}
