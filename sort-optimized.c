#include<stdio.h>
#include<math.h>

#define N 300000 //total no. of elements
#define S 10 //size+1 of total elemets


void swap(long int*a,long int* b);
int partition( long int arr[],int low,int high);
void quickSort(long int arr[], int low,int high);

void printArray(long int arr[], int size,int alpha) 
{	 
	long int i,m,j,x,k; 
	for (i=0; i < size; i++) 
	{x=arr[i] ;m=pow(100,S-2);
	for(j=0;j<S-1;j++)
	{k=x/m;
	if(k==11) break;
	x=x%m;m=m/100;
	k=k+50;
	printf("%c",(char)(k));
	}
	printf(" %d\n",alpha);
	}
	 
} 
int main()
{int alpha;

for(alpha=1;alpha<=100;alpha++)
{//counter
printf("\n %d \n",alpha);
char name[N][S];int i,j,s;
printf("Input:\n");

//taking input
for(i=0;i<N;i++)
 scanf("%s",name[i]);
long int val=0;
//calculating corresponding ascii value code
long int ascii_name[N]={0};
s=S-2;
long int pow_array[S-1]={0};int z=s;
for(i=0;i<=s;i++)
{
pow_array[z]=pow(100,s-i);z--;
}
int beta;
for(i=0;i<N;i++)
{
for(j=0;j<S-1;j++)
{if (name[i][j]=='\0') beta=11 ; else beta=(int)(name[i][j])-50;
val=val+(beta*pow_array[s-j]);}
ascii_name[i]=val;val=0;
}

long int max=0;int n=N-1;
int flag_array[N]={0};//int output_array[N]={0};
//sorting
/*do
{//if(flag_array[i]) continue;
for(j=0;j<N;j++)
	{if(flag_array[j]) continue;
	if(ascii_name[j]>max) max=ascii_name[j],val=j;}
flag_array[val]=1;printf("%s\n",name[val]);n--;max=0;
}while(n>=0);*/

quickSort(ascii_name, 0,N-1);
printArray(ascii_name,N,alpha);

}
return 0;
}
// A utility function to swap two elements 
void swap(long int* a, long int* b) 
{ 
	long int t = *a; 
	*a = *b; 
	*b = t; 
} 

/* This function takes last element as pivot, places 
the pivot element at its correct position in sorted 
	array, and places all smaller (smaller than pivot) 
to left of pivot and 909090all greater elements to right 
of pivot */
int partition (long int arr[], int low, int high) 
{ 
	long int pivot = arr[high]; // pivot 
	int i = (low - 1); // Index of smaller element 

	for (int j = low; j <= high- 1; j++) 
	{ 
		// If current element is smaller than or 
		// equal to pivot 
		if (arr[j] <= pivot) 
		{ 
			i++; // increment index of smaller element 
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[i + 1], &arr[high]); 
	return (i + 1); 
} 

/* The main function that implements QuickSort 
arr[] --> Array to be sorted, 
low --> Starting index, 
high --> Ending index */
void quickSort(long int arr[], int low, int high) 
{ 
	if (low < high) 
	{ 
		/* pi is partitioning index, arr[p] is now 
		at right place */
		int pi = partition(arr, low, high); 

		// Separately sort elements before 
		// partition and after partition 
		quickSort(arr, low, pi - 1); 
		quickSort(arr, pi + 1, high); 
	} 
} 


/*c",((char)m)); k=k/100;}while(k>=1);
printf("\n");
}*/
/*for(i=0;i<N;i++)
{
printf("%s\n",name[output_array[i]]);
}*/










