/*  Subtracts 15 from 87 and displays result    */

#include <stdio.h>

int main(void){
    int value1, value2, ans;

    value1 = 15;
    value2 = 87;
    ans = value2 - value1;

    printf("The result of %i minus %i is %i\n", value2, value1, ans);

    return 0;
}