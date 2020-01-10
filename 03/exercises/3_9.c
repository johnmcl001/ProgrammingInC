/*  Write a program to find the next largest even multiple for the following
    values of i and j:
        i       j
        365     7
        12258   23  
        996     4
*/

#include <stdio.h>

int main(void){
    int i, j, ans;

    i = 365;
    j = 7;
    ans = i + j - i % j;
    printf("The next largest even multiple of %i and %i is %i\n", i, j, ans);

    i = 12258;
    j = 23;
    ans = i + j - i % j;
    printf("The next largest even multiple of %i and %i is %i\n", i, j, ans);

    i = 996;
    j = 4;
    ans = i + j - i % j;
    printf("The next largest even multiple of %i and %i is %i\n", i, j, ans);
    
    return 0;
}
