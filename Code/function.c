#include<stdio.h>
void hi();
void hey();
int main(){
char n;
printf("enter i for indian and f for french ");
scanf("%c", &n);
 
 if(n== 'i'){
    hi();
 }
 else if (n== 'f'){
    hey();
 }
 else {
    printf("invalid statement");
 }
return 0;
} 

void hi(){
    printf("Namaste\n");

}
void hey(){
    printf("Bonjour:)\n");
}