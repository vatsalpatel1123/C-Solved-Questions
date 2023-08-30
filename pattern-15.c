#include <stdio.h>

int main() {
    
    int i,j,k,n;
    printf(" -  Floyd's Triangle - \n");
    printf("Enter Number : ");
    scanf("%d",&n);
   
    k =1;

  for(i=1; i<=n; i++){

    for (j = 1; j <= n; j++)
    {
        if (i>=j)
        {
            printf("%d",k++);

        }
        // else{
        //     printf(" ");
        // }
    }
        printf("\n");
    
  }
    return 0;
}