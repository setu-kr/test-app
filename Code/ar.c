#include <stdio.h>

int main()
{
    int arr[25] = {1, 2, 3, 4, 3, 5, 6, 7, 8, 4};

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > arr[i + 1] && arr[i] > arr[i - 1])
        {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}