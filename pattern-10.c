#include <stdio.h>

int main() {
    
    int i,j,k,n;
    printf(" -  Hollow Full Pyramid - \n");
    printf("Enter Number : ");
    scanf("%d",&n);
    


    for(i=1; i<=n; i++){
        for(j=n; j>=1; j--){

            if(i >= j){
                if(i == n || j == 1 || i == j ){
            printf("* ");
            }
             else{
                printf("  ");
            }
            }

            else{
                printf(" ");
            }
        }
        printf("\n");
    }

return 0;

}