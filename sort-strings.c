/*
     * C program to read N names, store them in the form of an array
     * and sort them in alphabetical order. Output the given names and
     * the sorted names in two columns side by side.
     */
 
    #include <stdio.h>
    #include <string.h>
    #define N 100000
    int main()
    {
 
        char name[N][10], tname[N][10], temp[10];
        int i, j, n;
 
       //printf("Enter the value of n \n");
        //scanf("%d", &n);
        n=N;
	printf("Enter %d names n \n", n);
 
        for (i = 0; i < n; i++) 
        {
            scanf("%s", name[i]);
            strcpy(tname[i], name[i]);
        }
 
        for (i = 0; i < n - 1 ; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (strcmp(name[i], name[j]) > 0) 
                {
                    strcpy(temp, name[i]);
                    strcpy(name[i], name[j]);
                    strcpy(name[j], temp);
                }
            }
        }
 
        printf("\n----------------------------------------\n");
        printf("Input NamestSorted names\n");
        printf("------------------------------------------\n");
 
        for (i = 0; i < n; i++) 
        {
            printf("%s\t\t%s\n", tname[i], name[i]);
        }
 
        printf("------------------------------------------\n");
 
   return 0; }
