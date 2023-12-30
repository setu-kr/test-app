#include<stdio.h>

void cold();
void hot();

int main (){

int n;
printf("enter tem 0-100\n");
scanf("%d", &n);

if (n<=25){
    cold();
}


else if(n>25 && n<=100){
    hot ();
}
else printf("invalid temp");

}

void cold(){

    printf("cold");

}
void hot(){

    printf("hot");
}