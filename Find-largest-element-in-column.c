#include <stdio.h>

int main()
{
    int m,n;                
    printf("Enter the number of rows and column: \n");
    scanf("%d %d",&m,&n);   
    int arr[10][10];        
    printf("\nEnter the elements of the matrix: \n");
    for(int i=0;i<m;i++)    
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe elements in the matrix are: \n");
    for(int i=0;i<m;i++)     
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int i = 0, j;
    int max = 0;
    int res[m];
    while (i < m)   
    {
       for ( j = 0; j < n; j++)
       {
           if (arr[j][i] > max)
           {
              max = arr[j][i];
           }
        }
        res[i] = max;
        max = 0;
        i++;
    }
    for(int i = 0; i < n; i++)     
    {
       printf("Largest element in row %d is %d \n", i, res[i]);
    }
    
    return 0;
}