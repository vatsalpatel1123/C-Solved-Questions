#include<stdio.h>

int main(){

    float x,y,z;

    printf("Enter First Number :");
    scanf("%f",&x);

     printf("Enter Sec Number :");
    scanf("%f",&y);

    z = x*y;
    
     printf("Multiplication of %0.2f and %0.2f = %0.2f \n",x,y,z);

    return 0;
}