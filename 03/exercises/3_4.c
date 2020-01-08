/*  Convert 27 from fahrenheit to celsius   */

#include <stdio.h>

int main(void){
    int fahr = 27, subtractor = 32, divisor = 1.8, celsius;

    celsius = (fahr - subtractor) / divisor;

    printf("%i in fahrenheit is %i in celsius\n", fahr, celsius);

    return 0;
}