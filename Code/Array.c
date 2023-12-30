#include<stdio.h>
void printnum(int *a , int n){
    for(int i =0; i<n; i++){
        printf("%d\n", a[i]);
    }
}
int main ()
{

int a[6]= {1,2,2,3,3,3};
 printnum(a,6);
 
}
 