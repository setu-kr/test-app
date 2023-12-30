#include<stdio.h>

int odd( int arr[], int n ){
    int count = 0;

    for (int i=0; i<n; i++){
     if(arr[i]%2 !=0){
        count ++;


     }

    }
  return count;


}
int main(){
int arr[5] ={ 1,2,4,5,6};

int x;

x= odd (arr,5);
printf("%d",x);

}
