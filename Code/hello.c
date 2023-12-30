
#include<stdio.h>
 
 int fact(int n);
 
 
 int main(){
 int n;
 scanf("%d", &n);
 printf("factorial is %d", fact(n));
 }

 int fact(int n){

    if(n==1){
        return 1;

    }

int fnm1=fact(n-1);
int fn;
fn= fnm1*n;

return fn;

 }
 