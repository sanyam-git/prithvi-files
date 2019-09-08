//print ramanujnan numbers in 1 crore range in 1 second !!
#include<stdio.h>
int main()

{
long long n,a,b;

printf("Enter the value of 'n' till which \n");
scanf("%lld",&n);
int arr[1000]={0};
long long c,d,i,j,k,l;int x=0;//array 

for(a=1;a<=n;a++)  //l1
	{i=a*a*a;
	if(i>n)break;
	
		for(b=a;b<=n;b++)//l2
		{j=b*b*b;
		if(i+j>n)break;
			
			for(c=a+1;c<=n;c++) //lop3
			{k=c*c*c;
			if(k>i+j)break;
				
				for(d=c;d<=n;d++)//l4
				{
 				l=d*d*d;
	 			
				if(k+l>i+j)break;
    				//both are diff.
				if(j+i==k+l)
   	 			{//printf("%d \n",i+j);
				arr[x]=(i+j);x++;}//storing a RAMANUJAN number
    
    }//1
    }//2
    }//3
    }//4 code creating ramanujan number stops here

// sorting algo starts from here
int l1,h1,num=1000,i1; //num is the total no. of elements in the ramanujan number array

//SOME NON REQUIRING PRINT AND SCANF CODE
//printf("How many numbers do you want to sort - ");
//scanf("%d",&num);

//int arr[num];
//printf("Please enter the %d values that you want to sort i.e. arrange in increasing order - ",num);


//for(i1=0;i1<num;++i1)
//scanf("%d",&arr[i1]);

for(i1=1;i1<num;++i1)
{

if(arr[i1]>=arr[i1-1])
continue;

if(arr[i1]<=arr[0])
{
  h1=0;
  goto swap;
}

for(l1=0,h1=i1-1;(h1-l1)!=1;)
{
   if(arr[i1]>=arr[(l1+h1+1)/2])
   l1=(l1+h1+1)/2;
   else if(arr[i1]<=arr[(l1+h1+1)/2])
   h1=(l1+h1+1)/2;
}

swap:

for(int j=i1-1;j>=h1;--j)
{
arr[j]=arr[j+1]+arr[j];
arr[j+1]=arr[j]-arr[j+1];
arr[j]=arr[j]-arr[j+1];
}

}
for(i1=0;i1<num;++i1)
{
if(arr[i1]!=0) //removing the case of printing 0 
printf("%d\n",arr[i1]);
}
//printf("%d ",arr[i1]);
//printf("\n");



return 0;
}

