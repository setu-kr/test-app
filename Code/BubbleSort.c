#include <stdio.h>
int bubbleSort(int *arr, int n)
{
    int x;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                x = arr[i];
                arr[i] = arr[j];
                arr[j] = x;
            }
        }
    }
    printf("The ascending order of the elements is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
int main()
{
    int arr[10];
    int n;
    printf("enter no. of elements"); // how many elements should be there.
    scanf("%d", &n);
    printf("enter elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);
    return 0;
}