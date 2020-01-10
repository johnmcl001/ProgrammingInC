/*  Evaluate the following and print the result using scientific notation
    (3.31 * 10E-8 * 2.01 * 10E-7) / (7.16 * 10E-6 + 2.01 * 10E-8)           */

#include <stdio.h>

int main(void){
    float numerator = 3.31 * 10E-8 * 2.01 * 10E-7;
    float denominator = 7.16 * 10E-6 + 2.01 * 10E-8;

    printf("The answer is %.3g\n", numerator / denominator);

    return 0;  
}