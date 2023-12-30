#include<stdio.h>

#define ROWS 10
#define COLS 2

void printTable(int Table[ROWS][COLS]){

    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            printf("%d\t",Table[i][j]);

        }
             printf(" \n");
    }
   
}
int main(){
    int Table[ROWS][COLS];

    for(int i = 0; i < ROWS; i++){
        Table[i][0] = (i+1)*2;   // Multiply by 2 for the table of 2.
        Table[i][1] = (i+1)*3;  //  Multiply by 3 for the table of 3.
    }
    // print the table
    printTable(Table);

    return 0;
}
