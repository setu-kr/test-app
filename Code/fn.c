#include<stdio.h>
int main(){
int n;
printf("enter num:");
scanf("%d", &n);
 int s=5;
 for(int i=2;i<=n/2;i++){
    if(n%i==0){
        printf("not a prime no");
     s=10;
     break;
    }

 }

 if(s==5){printf("prime no");
    
 }

}