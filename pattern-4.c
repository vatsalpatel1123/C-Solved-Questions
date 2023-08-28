#include <stdio.h>

int main() {
    
    int i,j,n;
    printf(" - Inverted Right Half Pyramid - \n");
    printf("Enter Number : ");
    scanf("%d",&n);
    n = 5;
    
    for(i=1; i<=n; i++){
        
        for(j=1; j<=n; j++){
        
        if(i <= j)
        printf("*");
        }
        printf("\n");
    }

    return 0;
}
