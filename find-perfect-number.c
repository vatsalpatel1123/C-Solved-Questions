#include<stdio.h>



int main(){

    int x,y,sum;
    printf("-- Find Perfect Number --");

    printf("Enter Starting Number :");
    scanf("%d",&x);

    printf("Enter Ending Number :");
    scanf("%d",&y);

    for(int i=x; i<=y; i++){

        sum = 0;

        for(int j=1; j<i; j++){

            if(i % j == 0){
            sum = sum + j;
            }
        }
        if(sum == i){
            printf("\n\tPerfect Number is :%d",i);
        }



    }


    return 0;
}