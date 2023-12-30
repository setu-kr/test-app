#include<stdio.h>

int main(){
int n,duplicate=-1,arr[10]= {1,2,23,34,5,6,5,5,6,5};

 scanf("%d",&n);
 for(int i=0;i<=9;i++){
if(n==arr[i]){
    duplicate++;
}
 
 }
 
if(duplicate>=0){
    printf("%d has %d other duplicates",n,duplicate);
}
else printf("%d is not present in arr",n);

 
return 0;
}