/*  Using nested for loops  */

#include <stdio.h>

int main(){
    int n, number, triangularNumber, counter;

    for (counter = 0; counter < 5; ++counter){
        printf("What triangular number do you want? ");
        scanf("%i", &number);

        triangularNumber = 0;

        for (n = 0; n < number; ++n){
            triangularNumber += n;
        }

        printf("Triangulr number %i is %i\n\n", number, triangularNumber);
    }

    return 0;
}