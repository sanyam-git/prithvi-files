#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()

{
int n,s;
char ch;

do{
do{
printf("What do you choose ? Enter the number\n 1.Rock   2.Paper  3.Scissors   4.Lizard  5.Spock \n");
scanf("%d",&n);getchar();
}while(n!=1 && n!=2 && n!=3 && n!=4  && n!=5);

switch(n)
{
	case 1:printf("\nUser selected ROCK");
	       break;
	       case 2:printf("\nUser selected PAPER");
	       break;
	       case 3:printf("\nUser selected SCISOORS");
	       break;
	       case 4:printf("\nUser selected LIZARD");
	       break;
	       case 5:printf("\nUser selected SPOCK");
	       break;
}

do{s=time(NULL);

s=(s%5)+1;}while(s==n);
switch(s)
{ case 1:printf("\n Computer selected ROCK\n");
         break;
         case 2:printf("\n Computer selected PAPER\n");
         break;
         case 3:printf("\n Computer selected SCISOORS\n");
         break;
         case 4:printf("\n Computer selected LIZARD\n");
         break;
         case 5:printf("\n Computer selected SPOCK\n");
         break;
}

if((n==1 && s==3) || (n==1 && s==4))
printf("Computer Wins !! \n");

else if((n==1 && s==2) || (n==1 && s==5))
printf("User Wins !! \n");

else if((n==2 && s==3) || (n==2 && s==4))
printf("Computer Wins !! \n");

else if((n==2 && s==1) || (n==2 && s==5))
printf("User Wins !! \n");

else if((n==3 && s==5) || (n==3 && s==1))
printf("Computer Wins !! \n");

else if((n==3 && s==2) || (n==3 && s==4))
printf("User Wins !! \n");


else if((n==4 && s==3) || (n==4 && s==1))
printf("Computer Wins !! \n");

else if((n==4 && s==4) || (n==4 && s==5))
printf("User Wins !! \n");


else if((n==5 && s==2) || (n==5 && s==4))
printf("Computer Wins !! \n");

else if((n==5 && s==1) || (n==5 && s==3))
printf("User Wins !! \n");


printf("To play again. Press Enter");
scanf("%c",&ch);

}while(ch=='\n');

printf("\n Game terminated.Thanks for playing");
return 0;
}

