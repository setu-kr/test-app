#include<stdio.h>

int main(){
int arr[100],n,sum=0;
printf("Enter number of elements of the array: \n");
scanf("%d",&n);
printf("Enter elements of the array: \n");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
sum=arr[0];
int aalu=sum;
for(int i=0;i<n;i++){
    if(arr[i]>sum){
        aalu=sum;
        sum=arr[i];
    }
}
printf("Second largest element = %d\n",aalu);
return 0;
}