#include <stdio.h>

void printfunction(int arr[], int n);
void quickSort(int arr[], int i, int j);
int partition(int arr[], int x, int y);

void swap(int *a, int *b);

int main()
{

    int arr[] = {20, 70, 40, 80, 90, 10, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = size - 1;

    printf("Given Unsorted Array Values \n");
    printfunction(arr, n);

    quickSort(arr, 0, n);

    printf("\nSorting Given Array In The Ascending Order: \n");
    printfunction(arr, n);

    return 0;
}

void printfunction(int arr[], int n)
{

    for (int i = 0; i <= n; i++)
    {
        if (i == n)
        {
            printf("%d \n", arr[i]);
        }
        else
        {
            printf("%d,", arr[i]);
        }
    }
}

void swap(int *a, int *b)
{

    int extra = *a;
    *a = *b;
    *b = extra;

}

int partition(int arr[], int x, int y)
{

    int pivot = arr[y];

    int i = (x - 1);

    for (int j = x; j < y; j++)
    {


        if (arr[j] <= pivot)
        {
           
            i++;
           
        }
    }
    
    swap(&arr[i + 1], &arr[y]);

    return (i + 1);
}

void quickSort(int arr[], int i, int j)
{
    if (i < j)
    {

        int part = partition(arr, i, j);

        quickSort(arr, i, part - 1);

        quickSort(arr, part + 1, j);
    }
}
