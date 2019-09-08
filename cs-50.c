#include <stdio.h>

int main()
{
    int height, i, j, k;
    
    // Get height of pyramid from user
    do
    {
        printf("Height: ");
        scanf("%d",&height);
    }
    while (height < 0 || height > 23);
    
    // Print lines
    for (i = 1; i <= height; i++)
    {
        // Print spaces
        for (j = 0; j < (height - i); j++)
        {
            printf(" ");
        }
        
        // print hashes
        for (k = 0; k < i; k++)
        {
            printf("#");
        }
        
        printf("  ");
        
        // print hashes again
        for (k = 0; k < i; k++)
        {
            printf("#");
        }
        
        printf("\n");
    }
    
    return 0;
}
