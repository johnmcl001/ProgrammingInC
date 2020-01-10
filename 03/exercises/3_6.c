/*  evaluate the polynomial 3x^3 - 5x^2 + 6
    where x = 2.25                              */

#include <stdio.h>

int main(void){
    float ans, x = 2.55;

    ans = 3 * x * x * x - 5 * x * x + 6; 

    printf("3(%.2f)^3 - 5(%.2f)^2 + 6 = %.2f\n", x, x, ans);

    return 0;
}