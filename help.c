		//	ID. No.:
		//	Name:
		//	Set (A or B):
			
#include <stdio.h>
#include <string.h>

typedef struct record {
	char name[70];
	char idno[16];
	float compre;
	int rank;
  } STUD;

void readData(STUD a[], int max)
{
  FILE *fp;
  /* Your code goes here....
	...
	...

  */
  fclose(fp);
  return;
}


void storeRanks(STUD a[], int max)
{

  /* Your code goes here....
	...
	...

  */
  return;
}

void displayData(STUD a[], int max)
{
  int i;
  for (i = 0; i < max; ++i)
    printf("%18s %20s\t %.2f %d\n", a[i].idno, a[i].name, a[i].compre, a[i].rank);
  return;
}

int main()
{
  int maxelems;
  scanf("%d", &maxelems);
  STUD arr[maxelems];
  readData(arr,maxelems);	// populates the array of structures
  storeRanks(arr,maxelems);	// computes rank of each student and stores in the record
  displayData(arr,maxelems);
  return 0;
}
