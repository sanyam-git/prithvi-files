#include<stdio.h>

int main()

{
int n=10,i,max=0,num[100];// user is asked about the number of number he want to input
	
printf("Enter the numbers\n\n");
	
for(i=0;i<n;i++)  /*number of imputs limited to 100*/{scanf("%d",&num[i]); if(num[i]>max)
	max=num[i];
	}

//calculating the highest number in upper loop only

//calculating frequency
int mode=0,mnum=0;
int fr[(max+2)];
fr[0]=0;
for(i=0;i<n;i++)
	{(fr[(num[i])])++;
         if((fr[(num[i])])>mnum)
	 {mode=num[i];
         mnum=fr[(num[i])];}
	}
printf("\n fre %d",mnum);
printf("\n \n Mode is %d ",mode);
return 0;
}

