#include <stdio.h>

int main() {
    
    int i,j,k,n,c;
    printf(" -  Pascal's Triangle - \n");
    printf("Enter Number : ");
    scanf("%d",&n);
   

    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
           printf(" ");
        }
        c = 1;
        
        for (k = 1; k <= i; k++)
        {
           printf("%d ",c);
           c = c*(i-k)/k;

        }
        printf("\n");
        
    }
    
   

    return 0;

}