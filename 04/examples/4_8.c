/*  Reversing the digits of a number    */

#include <stdio.h>

int main(){
    int number;

    printf("Type in a number to reverse: ");
    scanf("%i", &number);

    printf("The reverse of %i is ", number);
    while (number != 0){
        printf("%i", number % 10);
        number /= 10;
    }

    printf("\n");

    return 0;
}