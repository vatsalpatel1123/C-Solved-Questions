#include <stdio.h>

int main() {
    
    int i,j,k,n;
    printf(" -  Mirror Pattern - \n");
    printf("Enter Number : ");
    // scanf("%d",&n);
    printf("\n");
    n =5;

    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= 1; j--)
        {
            if(i>=j)
           printf("%d",j);
           else
           printf(" ");
        }
        for (k = 2; k <= n; k++)
        {
            if(i>=k)
            printf("%d",k);

           else
           printf(" ");
        }
        printf("\n");
        
    }
    

    return 0;
}