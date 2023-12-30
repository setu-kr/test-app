#include<stdio.h>
int fibonacci(int a);

int main(){
   int a;
   scanf("%d", &a);
 
   fibonacci(a);
return 0;
}

int fibonacci(int a){
    if(a==0){
        return 0;
    } if(a==1){
        return 1;
    }
int foa1= fibonacci(a-1);
int foa2= fibonacci (a-2);
int foa= foa1+foa2;

 printf("%d\n",foa);
return foa;





}