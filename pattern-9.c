#include <stdio.h>

int main() {
    
    int i,j,k,n;
    printf(" -  Rhombus Pattern - \n");
    printf("Enter Number : ");
    scanf("%d",&n);
    // printf("\n");
    // n = 5;


        for ( i = n; i >= 1; i--)
        {

            for(k=i; k<n; k++){
               printf(" ");
                
            }
            for (j = 1; j <= n; j++){

               printf("*");
            }

            printf("\n");
            }
        
        

   

   
    return 0;
}