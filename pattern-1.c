#include<stdio.h>

int main(){

    int i,j,N;

    printf("Enter Number Of Hollow Square to print : ");
    scanf("%d",&N);

    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= N; j++){

            if(i==1 || j==1 || i==N || j==N){
            printf(" * ");
            }
            else{
            printf("   ");

            }
        }
            printf("\n");
    }
    

    return 0;
}