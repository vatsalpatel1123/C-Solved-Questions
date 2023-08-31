#include<stdio.h>

int main(){

    int i,j,k,n;

    printf(" - Plus Pattern - ");
    printf("Enter Number : ");
    // scanf("%d",n);
    printf("\n");
       n = 10 ;

    for (i = 1; i <= n*2-1; i++)
    {
        for (j = 1; j <= n*2-1; j++){

            
            if( j == n || i == n){
            printf("* ");
            }
            
            else{
                printf("  ");
            }
            

        
        }
        printf("\n");
    }
    

    return 0;
}