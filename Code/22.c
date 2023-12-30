#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int i=0;
    for(;i<a;){

        a--;
        i++;
    }
    printf("%d",i);
}