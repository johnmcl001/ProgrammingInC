/*  Calculate the 200th triangular number using a for loop  */

#include <stdio.h>

int main(){
    int triangularNumber, i;

    triangularNumber = 0;

    for (i = 1; i <= 200; i = i+1){
        triangularNumber = triangularNumber + i;
    }

    printf("The 200th triangular number is %i\n", triangularNumber);

    return 0;
}