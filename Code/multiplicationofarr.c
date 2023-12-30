#include<stdio.h>
 
int main(){
 int arr[10]={1,2,3,4,5};
 int x=6;

for(int i=5;i>=3;i--)
{
    arr[i]=arr[i-1];
}
arr[2]=x;
 for(int i=0;i<6;i++){
    printf("%d ",arr[i]);
 }
return 0;
}