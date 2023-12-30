#include <stdio.h>

int main()
{
    int arr[10] = {5, 0, 98, 73, 34, 5452, 234, 432, 2342, 242};
    int n;
    int numPresent = 0;
    printf("enter n");
    scanf("%d", &n);
    for (int i = 0; i <= 9; i++)
    {
        if (n == arr[i])
        {
            numPresent = 1;
        }
    }
    if (numPresent == 1)
    {
        printf("num is present");
    }
    else
        printf("not present");

    return 0;
}
