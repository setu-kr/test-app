#include <stdio.h>

int selectionSort(int *arr, int n)
{

    int x;
    for (int i = 0; i < n - 1; i++)
    {
        int indexofmin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[indexofmin])
            {
                indexofmin = j;
            }
        }
        x = arr[i];
        arr[i] = arr[indexofmin];
        arr[indexofmin] = x;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int main()
{

    int arr[10];
    printf("enter array");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, 10);

    return 0;
}