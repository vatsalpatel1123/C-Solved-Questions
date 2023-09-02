#include <stdio.h>
int main()
{
    int count,maxCount,i,j,maxElement;   
    int n,a[100]; 
    
    count = 1;
    maxCount = 0;
    
     printf("Enter array size: ");
     scanf("%d",&n);
     printf("Enter array element: ");
    for(int i = 0; i < n; i++){
        scanf("%d ", &a[i]);  
    }
    
    for(i=0; i<n; i++){
        
        for(j=1+i; j<n; j++){
            
            if(a[i]==a[j]){
                
                count++;
               
                if(count > maxCount)
                {
                    maxElement = a[j];
                }
            }
            
        }
        }
    
    
         printf("Entered array is: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);  
    }
    printf("Maximum Element is %d that repeats %d times",maxElement,count);
}