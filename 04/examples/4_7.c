/*  finding the greatest common divisor */

#include <stdio.h>

int main(){
    int u = 10, v, temp;
    
    printf("Type in 2 nonnegative integers.\n");
    scanf("%i%i", &u, &v);

    while (v != 0){
        temp = u % v;
        u = v;
        v = temp;
    }

    printf("The greatest common divisor is %i\n", u);

    return 0;
}