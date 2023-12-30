#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ankit = 67;
    for (int i = 2; i <= n / 2; i++)
    {

        if (n % i == 0)
        {
            printf("not prime\n");
            ankit = 9;
            break;
        }
    }
    if (ankit == 67)
    {
        printf("prime no");
    }
}
