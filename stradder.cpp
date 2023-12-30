#include <iostream>
#include <string.h>
using namespace std;

char adder(char str1[], char str2[]){
    strcat(str1,str2);
    puts(str1);
}

int main(){
    char str1[100],str2[22];
    cin>> str1>> str2;
    adder(str1,str2);
    return 0;
}