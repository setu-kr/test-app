#include <stdio.h>

int main()
{
    int n;
    int arr[10] = {1, 2, 3, 4, 3, 3, 2, 1, 3, 44};
    int duplicate = 0;

    scanf("%d", &n);
    for (int i = 0; i <= 9; i++)
    {
        if (arr[i] == n)
        {
            duplicate++;
        }
    }
    if (duplicate >= 2)
    {
        printf("%d has its duplicates\n", n);
        return 1;
    }
    if (duplicate == 1)
    {
        printf("no duplicates found\n");
        return 0;
    }
    

    return 0;
}