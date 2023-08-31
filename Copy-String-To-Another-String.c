#include<stdio.h>

void cpy_str(char str[], char str1[], int index);

int main(){

    char str[30], str1[30];

    printf("Enter String : ");
    scanf("%s",str);
    
    cpy_str(str, str1, 0);
    printf("Input String : %s \n",str);
    printf("Copied String : %s \n",str1);


    return 0;
}

void cpy_str(char str[], char str1[], int index){

    str1[index] = str[index];
       if (str == '\0') {
        return;
       cpy_str(str, str1, index + 1);
       }
}
