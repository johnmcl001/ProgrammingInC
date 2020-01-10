/*  Generate a table of first 10 trangular numbers   */

#include <stdio.h>

int main(){
    int i, j, trangularNumber;

    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf(" n\tsum from 1 to n\n");
    printf("---\t---------------\n");

    trangularNumber = 0;

    for(i = 1; i <= 10; ++i){
        trangularNumber += i;
        printf("%2i\t\t%i\n", i, trangularNumber);
    }

    return 0;
}