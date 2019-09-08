#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
char id[15];
char name[100];
float marks;
int rank;
int flag;
};
struct student arr[50];
struct student sorted[50];
void readdata(struct student arr[50])
{int i;
for(i=0;i<50;i++)
{scanf("%[^,]",arr[i].id);getchar();scanf("%[^,]",arr[i].name);getchar();
scanf("%f",&arr[i].marks);getchar();
}
}
void rankig(struct student sorted[50],struct student arr[50])
{int count=0,i;
	for(i=0;i<50;i++)
	arr[i].flag=1;
	
	int temp_rank;
	float temp=10000000,max=-1;int ranks=1,j,index;
	for(count=0;count<50;count++)
	{	max=-1;
		for(j=0;j<50;j++)
		if(arr[j].marks>max && arr[j].flag==1) {max=arr[j].marks;index=j;}

		arr[index].flag=0;

		strcpy(sorted[count].id,arr[index].id);
		strcpy(sorted[count].name,arr[index].name);
		sorted[count].marks=max;
		
		if(temp==max)
		{sorted[count].rank=temp_rank;
		temp_rank=ranks;}
		
		else
		{temp_rank=ranks;
		sorted[count].rank=ranks;ranks++;}
		temp=max;
	}

}

void print(struct student sorted[50])
{
int i;
for(i=0;i<50;i++)
{printf("%s  ",sorted[i].name);
printf("%s  ",sorted[i].id);
printf("%f  ",sorted[i].marks);
printf("%d  ",sorted[i].rank);
printf("\n");
}

}

int main()
{readdata(arr);
rankig(sorted,arr);
print(sorted);



return 0;
}
