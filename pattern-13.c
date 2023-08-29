#include <stdio.h>

int main() {
    
    int i,j,k,n;
    printf(" -  Diamond Pattern - \n");
    printf("Enter Number : ");
    scanf("%d",&n);

    for (i = 1; i <= n; i++)
    {
        for(j=n; j>=1; j--){

            if(i>=j){
            printf("* ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

   for(i = 1; i<=n-1; i++){

        for(j=1; j<=n-1; j++){
            if(i<=j){
                if( i == j){
            printf(" ");

                }
            printf("* ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    

    return 0;

}