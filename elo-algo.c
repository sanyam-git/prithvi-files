#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#define R 10
#define K 32
typedef struct ghots
{	char name[50];
	int rate;
}
int main()
{
	FILE *r, *wr, *wn;
	r=fopen("rate","r");
	printf("          GHOTMAX            \n");
	int t_1,t_2,input;
	char ch;
	float e_1,e_2;
	ghots rate[R];
	for(int i=0;i<R;i++)
	{	fscanf(r,"%d",&rate[i].rate);	
		}
	fclose(r);
	wr=fopen("rate","w");
	wn=fopen("name","w");
	for(int i=0;i<R;i++)
	{	fscanf(wn,"%s",rate[i].name);
	}
	fclose(wn);
	do{ //User Input
		t_1 = time(NULL);
		t_2 = (t_1*6)+1;

		do{t_1=t_1%R;}while(t_1>R);
		t_1++;
		do{t_2=t_2%R;}while(t_2>R);
		t_2++;
		do{printf("Who is the bigger ghot ? Enter the number\n");
		printf("1. ");
		switch(t_1)
		{	 case 1: printf("Adit");
         			break;
         		case 2: printf("Shivam");
         		break;
         case 3: printf("Puru");
         	break;
         case 4: printf("Sanyam");
         	break;
	 case 5: printf("Hardik");
         	break;
	 case 6: printf("Prateek");
         	break;
	 case 7: printf("Yash");
         	break;
	 case 8: printf("Abhishek");
         	break;
         case 9: printf("Utkarsh");
         	break;
	 case 10: printf("Pulkit");
         break;
}
printf("\n2. ");
switch(t_2)
{case 1: printf("Adit");
         break;
         case 2: printf("Shivam");
         break;
         case 3: printf("Puru");
         break;
         case 4: printf("Sanyam");
         break;case 5: printf("Hardik");
         break;case 6: printf("Prateek");
         break;case 7: printf("Yash");
         break;case 8: printf("Abhishek");
         break;
         case 9: printf("Utkarsh");
         break;case 10: printf("Pulkit");
         break;
}printf("\n");
scanf("%d",&input);}while(input!=1 && input!=2);

// Get E -rating of users from database array
e_1=1/(1+pow(10.00,(rate[t_2-1]-rate[t_1-1])/400.000));

e_2=1/(1+pow(10.00,(rate[t_1-1]-rate[t_2-1])/400.000));
if(input==1)
{
    rate[t_1-1]=rate[t_1-1]+K*(1-e_1);
    rate[t_2-1]=rate[t_2-1]+K*(-e_2);
}
else if(input==2)
{
    rate[t_1-1].rate=rate[t_1-1].rate+K*(-e_1);
    rate[t_2-1].rate=rate[t_2-1].rate+K*(1-e_2);
}
getchar();
printf("\n\n Press y to CONTINUE \n press Q to quit");
scanf("%c",&ch);



}while(ch=='y');
printf("Do you want to see the current rankings");
getchar();
while(getchar()=='r')
{	for(int i=0;i<10;i++)
	{	printf("%d\n",rate[i]);	}
}
for(int i=0;i<10;i++)
{	fprintf(w,"%d\n",rate[i]);	}

fclose(w);


return 0;
}

