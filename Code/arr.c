#include<stdio.h>

void printarr(int arr[], int n);

int main(){
int arr[5]= {1,2,3,4,5};
 
 printarr(arr,5);
return 0;
}


void printarr(int arr[], int n){
    for(int i=n-1;i>=0;i--){
     printf("%d\t", arr[i]);

    }
}
