#include<stdio.h>
#include<stdlib.h>
int main()

{int n;

int i,score;
char do_again;

	
do{printf("Enter the number of questions\n");
scanf("%d",&n);}while(n<=0);

char key[n],res[n];

for(i=0;i<n;i++)
{ do{printf("Enter the correct answer for ques.%d (a/b/c/d) \n",i+1);
    // getchar();
     scanf(" %c",&key[i]);}while(key[i]!='a'&& key[i]!='b' && key[i]!='c' && key[i]!='d');
}

char name[20];

//Strat do_while loop here
   do{
printf("Input the name of student\n");
//getchar();
scanf(" %s",name);

for(i=0;i<n;i++)
{ do{printf("Enter the response by student ques. %d (a/b/c/d) \n",i+1);
getchar();   
scanf("%c",&res[i]);}while(res[i]!='a'&& res[i]!='b' && res[i]!='c' && res[i]!='d' && res[i]!='\n');
}
score=0;
for(i=0;i<n;i++)
{	if(key[i]==res[i])
	score++;
	else
        ;
}
//clear screen statement below
printf("\e[1;1H\e[2J");

//Output from here
printf("Name : %s \n",name);
printf("Key provided\n");
	for(i=0;i<n;i++)
	printf("%c",key[i]);
printf("\nResponses provided by %s \n",name);
	for(i=0;i<n;i++)
	printf("%c",res[i]);

printf("\n Marks obtained by %s : %d out of %d \n",name,score,n);

printf("\n Do you want to check for another student y/n ?\n");
//getchar();
scanf(" %c",&do_again);
}	while(do_again=='y');

printf("Good Bye !");

return 0;
}














































     



