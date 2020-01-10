/*  Reversing numbers with do-while */

#include <stdio.h>

int main(){
    int number;

    printf("Type a number to reverse: ");
    scanf("%i", &number);

    printf("%i in reverse is ", number);
    do {
        printf("%i", number % 10);
        number /= 10;
    } while (number != 0);

    printf("\n");

    return 0;
}