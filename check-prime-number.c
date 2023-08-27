#include<stdio.h>

int main(){

    int x;

    printf("-- Check Prime Number Or Not --\n");
    printf("Enter Number :");
    scanf("%d",&x);

    if(x == 1){
        printf("1 is neither prime nor composite");
        return 0;
    }

    int count = 0;

    for(int i=2;i<x;i++){

        if(x % i == 0){
            count ++;
        }

        }
    if (count == 0)
    {
        printf("%d is Prime Number",x);
    }
    else{
        printf("%d is not prime number",x);
    }
    


    return 0;
}