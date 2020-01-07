/*  A program to demonstrate the use of basic datatypes:
    int
    float
    double
    char              
    _Bool                                                    */

#include <stdio.h>

int main(void){
    int integerVar = 100;
    float floatingVar = 331.79f;
    double doubleVar = 8.44e+11;
    char charVar = 'W';
    _Bool boolVar = 0;

    printf("Integer Var: %i\n", integerVar);
    printf("Floating Var: %f\n", floatingVar);
    printf("Double Var: %e\n", doubleVar);
    printf("Double Var Two: %g\n", doubleVar);
    printf("Char Var: %c\n", charVar);
    printf("Boolean Var: %i\n", boolVar);

    return 0;
}