//print fibonaci series to nth term
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number >2 : ");
    scanf("%d", &n);

    int fib[n];
    fib[0]= 0;
    fib[1]= 1;
   
    printf("0\t 1\t\n");
    for(int i=2,j=0; i<=n, j<=n; i++,j++) {
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d\t",fib[i]);
        
    }

}