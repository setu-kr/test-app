#include<stdio.h>
float percentage();
int main(){
    

printf("%f", percentage());

 
}
float percentage(){
    float m,sc,s;
scanf("%f %f %f", &m , &s, &sc);

float t;
t= m+s+sc;
float P;
P= (t*100.0)/300.0;
printf("%f",P);
return P;


}

