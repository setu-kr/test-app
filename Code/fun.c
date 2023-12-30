#include<stdio.h>
int square(int s);

int main()
{
    square(5);
    return 0;
}

int square(int s) {
    int a = s*s;

    return a;
}