#include<stdio.h>

int main()

{int arr[2][2]={{1,2},{3,4}};
int *p=arr;

printf("%d",*(*(arr+1)+1));



}
