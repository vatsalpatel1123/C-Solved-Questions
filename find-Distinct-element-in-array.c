#include<stdio.h>


int main(){

    int n,a[50],temp;

    printf(" - Find The Distinct Element in Array -  \n");
    printf("Enter Size Of Array :");
    scanf("%d",&n);
    
    printf("Enter Elements Of Array :");
    for(int i=0; i < n ; i++){
        scanf("%d", &a[i]);
    }
  
  for (int i = 0; i < n; i++)
  {
    int temp;
    for (int j = i+1; j < n; j++)
    {
        if(a[i]>a[j]){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    
  }

    printf("Sorted Array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);

    }
    
     int count = 0;
    for (int i = 0; i < n; i++) 
    {
      
      while (i < n - 1 && a[i] == a[i + 1])
      {
         i++;
      }
      count++;    
    }
    printf("\nThe number of distinct elements are %d",count);   
    return 0;
}
    
