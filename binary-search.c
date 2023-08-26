#include<stdio.h>

int binary_search(int arr[], int a, int b, int val);

int main(){

    int arr[] = {10,20,30,40,50,60,70,80};
    int val;
    printf("10,20,30,40,50,60,70,80\n");
    printf("Select one of them for binary search :");
    scanf("%d",&val);
    int a = 0;
    int size = sizeof(arr)/sizeof(arr[0]);
    int b;

    if(size != 2){
        b = size - 1;
    }
    else{
        b = size;
    }

    int search = binary_search(arr,a,b,val);

    if(search == -1){
        printf("Element not found");
    }
    else{
        printf("As per Array : %d is present at index %d \n",val,(search));
        printf("As per Normal : %d is present at index %d",val,(search+1));
    }

    return 0;
}

int binary_search(int arr[], int a, int b, int val){

    while (a <= b)
    {
        int m = a + (b-a) / 2;

        if(arr[m] == val){
            return m;
        }

        if (arr[m] < val){
            a = m + 1;
        }
        else{
            b = m - 1;
        }
    }
    return -1;
}
