#include <stdio.h>
int main()
{
    int a[100], i, j, n, temp;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {

        int smallest = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[smallest])
            {
                smallest = j;
            }
        }
        temp = a[i];
        a[i] = a[smallest];
        a[smallest] = temp;
    }
    printf("Elements in Ascending order is\t");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}