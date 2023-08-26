#include<stdio.h>

int linear_search(int arr[], int i, int val);

int main(){

    int arr[] = {10,20,30,40,50,60,70};
    int val = 50;
    int i = sizeof(arr) / sizeof(arr[0]);

    int search = linear_search(arr,i,val);

    if(search == -1){
        printf("Element Not Found in Array! ");
    }else{
        printf("\n Element found at index %d and value is: %d \n",search,arr[search]);
    }
   

    return 0;
}

int linear_search(int arr[], int i, int val) {
  
  for (int y = 0; y < i; y++){
    if (arr[y] == val){
      return y;
      }
      }
  return -1;
}