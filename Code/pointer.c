#include<stdio.h>

void square(int n){
n=n*n;
printf("%d\n", n);
}

void psquare(int *n){
 *n= (*n)* (*n);
 printf("%d\n", *n);


}
int main (){

int num;
scanf("%d",&num);
square(num);
printf("%d\n",num);
psquare (&num);
printf("%d\n", num);

}