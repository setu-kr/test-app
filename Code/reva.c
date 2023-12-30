#include<stdio.h>

void reverse(int arr[], int n);

void printarr(int arr[], int n);


int main(){
    int arr [10]= {1,2,3,4,5,6,7,8,9};
     reverse(arr,(9));
     printarr(arr, (9));

return 0;
}
 
void reverse(int arr[],int n){
  for(int i=0; i<n/2; i++){
    int x= arr[n-i-1];
    int y= arr[i];
    arr[n-i-1]= y;
    arr[i]= x;

  }
}
void printarr(int arr[], int n){
for(int i=0;i<n;i++)
{
    printf("%d\t", arr[i]);
}
 

}