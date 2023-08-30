#include <stdio.h>

int main() {
    
    int i,j,k,n,c;
    printf(" -  X Pattern - \n");
    printf("Enter Number : ");
    scanf("%d",&n);


   for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i<=j)
            {
                if (i == j || j == n)
                {
                printf("* ");
                }
                else
            {
                printf("  ");
            }
                
            }
            else
            {
                printf(" ");
            }
            
            
        }
        printf("\n");
    }

    for (i = 2; i <= n; i++)
    {
        for (j = n; j >= 1; j--)
        {
            if (i>=j)
            {
                if (i == j || j == 1)
                {
                printf("* ");
                }
                else
            {
                printf("  ");
            }
                
            }
            else
            {
                printf(" ");
            }
            
            
        }
        printf("\n");
    }

    
    
    return 0;
}