#include<stdio.h>

int main(){

    int n,big,c,i;

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    printf("\nEnter Element 1 : ");
    scanf("%d",&big);

    for(i = 2; i<=n; i++){

        printf("Element %d : ",i);
        scanf("%d",&c);

        if(big < c){
            big = c;
            
        }
    }
    
    printf("\nLargest  value is %d .",big);

    return 0;
}