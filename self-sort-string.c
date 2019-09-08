#include<stdio.h>
#include<math.h>

#define N 100000 //total no. of elements
#define S 10 //size+1 of total elemets

int main()
{char name[N][S];int i,j,s;
printf("Input:\n");

//taking input
for(i=0;i<N;i++)
 scanf("%s",name[i]);
long long int val=0;
//calculating corresponding ascii value code
long long int ascii_name[N]={0};
s=S-2;
for(i=0;i<N;i++)
{
for(j=0;j<S-1;j++)
{val=val+(((int)(name[i][j]))*pow(100,(s-j)));}
ascii_name[i]=val;val=0;
}

long long int max=0;int n=N-1;
long long int arrange[N]={0};int flag_array[N]={0};int output_array[N]={0};
//sorting
do
{//if(flag_array[i]) continue;
for(j=0;j<N;j++)
	{if(flag_array[j]) continue;
	if(ascii_name[j]>max) max=ascii_name[j],val=j;}
flag_array[val]=1;arrange[n]=max;output_array[n]=val;n--;max=0;
}while(n>=0);

//for(i=0;i<N;i++)
//{printf("%lld \n",arrange[i]);}


//printing
/*for(i=0;i<N;i++)
{long int k=pow(100,S-2);long int x=arrange[i];int m;	
      do{m=x/k;
	x=x%k;

	printf("%c",((char)m)); k=k/100;}while(k>=1);
printf("\n");
}*/
for(i=0;i<N;i++)
{
printf("%s\n",name[output_array[i]]);
}




return 0;
}





