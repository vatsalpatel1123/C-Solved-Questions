#include <stdio.h>

int main()
{
    int n,total;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements :");
    int a[n];                   
    total = sizeof(a[n])/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Total %d",total);
    for(int i=0;i<n;i++)         
    {
        int temp;
        for(int j=i+1; j<n ;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The second smallest element is %d",a[n-2]);   
    printf("\n");
    printf("The second largest element is %d",a[1]);      
    return 0;
}