#include <stdio.h>

int main() {
    
    int i,j,n;
    printf(" -  Full Pyramid - \n");
    printf("Enter Number : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){

        for(j=n; j>=1; j--){
            if(i >= j){
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