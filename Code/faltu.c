#include<stdio.h>
int main(){
int a=4;
int *p= &a;
int **pt = &p;
printf("%d", **(pt));

}