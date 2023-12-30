#include<stdio.h>

int main(){
    int n,i,sum = 0,a=0,b=1,c;
    printf("Enter the number of terms:  ");
    scanf("%d",&n);

    printf("Fibonacci Series: ");
    for(i=1;i<=n; i++){
    printf("%d\t",a);

    c=a+b;
    a=b;
    b=c;
    sum +=a;
    }
    printf("Sum of Fibonacci series up to %d terms is %d",n,sum);

    return 0;
}