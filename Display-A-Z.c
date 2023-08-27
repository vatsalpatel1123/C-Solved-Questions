#include<stdio.h>

int main(){

    char alpha;
    int count = 0;

        printf("Alphabets A to Z using loop\n");

    for (alpha = 'A'; alpha <= 'Z'; alpha++)
    {
        printf("%c ",alpha);
        count++;
    }
        printf("\nCount :%d ",count);

    return 0;
}