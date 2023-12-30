#include <stdio.h>

int main()
{
    int arr[10];

    int n;
    printf("Enter the number of elements");
    scanf("%d", &n);

    printf("enter %d elements", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = 0;
    int smax = 0;
    int tmax = 0;

    for (int i = 0; i <= n; i++)
    {
        if (arr[i] > max)
        {
            tmax = smax;

            smax = max;
            max = arr[i];
        }
    }

    printf("The largest element is %d", tmax);

    return 0;
}