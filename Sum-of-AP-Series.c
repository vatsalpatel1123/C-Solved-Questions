#include<stdio.h>

int main(){

    int start,end,diff,sum;

    printf(" - Sum of A.P. Series - \n");
    printf("Enter Start Pint of Series : ");
    scanf("%d",&start);
    printf("Enter End Point of Series : ");
    scanf("%d",&end);
    printf("Enter Differnce between two points : ");
    scanf("%d", &diff );
 
    sum = 0;
    for (int i = start; i <= end; i = i + diff)
    {
        printf("%d ", i);
        sum += i;
    }
    printf("\n Sum = %d", sum);


    return 0;
}