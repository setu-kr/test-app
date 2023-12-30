#include <stdio.h>

int fibo(int n);

int main()
{
    int n;
    scanf("%d", &n);
    fibo(n);
    return 0;
}

int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int fibonM1 = fibo(n - 1);
    int fibonM2 = fibo(n - 2);
    int fibon = fibonM1 + fibonM2;
    printf("%d\t", fibon);
    return fibon;
}