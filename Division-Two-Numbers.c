#include<stdio.h>

int main(){

      float x,y,z,r;

    printf("Enter First Number :");
    scanf("%f",&x);

     printf("Enter Sec Number :");
    scanf("%f",&y);

    z = x/y;
    r = (int)x%(int)y;

    printf("\n\tThe Result Of Division Is %0.2f \n",z);
    printf("\n\tReminder =  %0.2f \n",r);

    
    return 0;
}