#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#define R 20
#define K 32

struct ghots
{       char name[50];
        int rate;
};

int main()
{
    FILE *r, *wr, *wn;
    
	r=fopen("rate","r");
    	printf("          GHOTMAX            \n");
    
	int t_1,t_2,input;
        char ch;
	float e_1,e_2;
	//scanf("%d",&R);	
	//fscanf(wn,"%d",&R);
	struct ghots rate[R];
	
	for(int i=0;i<R;i++)
        {       fscanf(r,"%d",&rate[i].rate);
			}
	fclose(r);
	
        wn=fopen("name","r");
	for(int i=0;i<R;i++)
        {       fscanf(wn,"%s",rate[i].name);
			}
	fclose(wn);
	
	wr=fopen("rate","w");
	
	do{ 
		//User Input
		t_1 = time(NULL);
		t_2 = (t_1*6)+1;
		
		do{t_1=t_1%R;}while(t_1>R);
		t_1++;
		do{t_2=t_2%R;}while(t_2>R);
		t_2++;
		
		do{	printf("Who is the bigger ghot ? Enter the number\n");
			printf("1. ");
			printf("%s\n",rate[t_1-1].name);
			printf("2. ");
			printf("%s\n",rate[t_2-1].name);
			scanf("%d",&input);
			}while(input!=1 && input!=2);
		
		// Get E -rating of users from database array
		e_1=1/(1+pow(10.00,(rate[t_2-1].rate-rate[t_1-1].rate)/400.000));
		e_2=1/(1+pow(10.00,(rate[t_1-1].rate-rate[t_2-1].rate)/400.000));
		
		if(input==1)
		{
			rate[t_1-1].rate=rate[t_1-1].rate+K*(1-e_1);
			rate[t_2-1].rate=rate[t_2-1].rate+K*(-e_2);
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
	
	for(int i=0;i<R;i++)
	{       fprintf(wr,"%d\n",rate[i].rate);      }
	
	fclose(wr);
	printf("Do you want to see the current rankings\n Press y\n");
	getchar();
	
	if(getchar()=='y')
	{   struct ghots t;
		 int i, j; 
   		for (i = R-2; i >=0; i--)         
       		for (j = R-i-2; j >=0; j--)  
           		if (rate[j].rate > rate[j-1].rate) 
			{	t=rate[j-1];
				rate[j-1]=rate[j];
				rate[j]=t;
				//strcpy(t.name,rate
              		}
		/*for(int i=0;i<R;i++)
			{	  for(int j=i;j<R;j++)
				{	if(rate[i].rate<rate[j].rate)
					{	t=rate[i];
						rate[j]=rate[i];
						rate[i]=t;
					}
				}
			}*/
		for(int i=0;i<20;i++)
			{printf("%d\t%s\t%d\n",i+1,rate[i].name,rate[i].rate);}
	
	}
	return 0;
}

