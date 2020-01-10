/*  d = d
    c is assigned 'd', d is assigned what is stored in char */

#include <stdio.h>

int main(void){
    char c, d;

    c = 'd';
    d = c;
    printf("d = %c\n", d);

    return 0;
}