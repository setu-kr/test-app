#include<stdio.h>
void operation(int a, int b,int *sum, int *product ,int *avg){

*sum=a+b;
*product= a*b;
*avg= (a+b)/2;


}
int main(){
 int x,y;
 scanf("%d %d", &x, &y);

 int sm,pro, av;
 operation( x,  y, &sm, &pro, &av);
 printf("%d %d %d\n", sm, pro, av);


}