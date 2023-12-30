#include <iostream>
#include <string.h>
using namespace std;

char comp(char str1[], char str2[]){
    strcmp(str1,str2);
   cout<<(strcmp(str1,str2));
}

int main(){
    char str1[100],str2[22];
    fgets(str1,99,stdin);
    fgets(str2,20,stdin);
   comp(str1,str2);
    return 0;
}