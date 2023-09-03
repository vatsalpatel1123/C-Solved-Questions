#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter the number of rows and column: \n");
    scanf("%d %d",&m,&n);   
    int a[m][n];
    printf("\nEnter the elements of the matrix: \n");
    for(int i=0;i<m;i++)     
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe elements in the matrix are: \n");
    for(int i=0;i<m;i++)    
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int lsum=0;       
    if(m==n)       
    {
       for(int i=0;i<m;i++)
       {
          for(int j=0;j<n;j++)
          {
               if(i<=j)      
               lsum=lsum+a[i][j];  
          }
        }
        printf("\nThe sum of lower triangular matrix is %d",lsum);   
    }
    else
    {
        printf("Not Possible to display lower triangular elements sum");   
    }
    return 0;
}