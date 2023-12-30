#include<stdio.h>
// To print the numbers in descending order.
int main(){
int num,arr[10];
int f=0;
printf("Enter number :");

for(int i=0;i<10;i++) {
    scanf("%d", &arr[i]);
}

printf("Enter n : ");
scanf("%d",&num);

for(int i=0;i<10;i++) {
    if(arr[i]==num) {
        f++;
    }
}
printf("%d",f);

return 0;
}