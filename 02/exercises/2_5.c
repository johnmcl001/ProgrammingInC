/*

#include <stdio.h>

int main(void){
    INT sum;                            capitalized INT
    /*  COMPUTE RESULTS                 No terminated comment
    sum = 25 + 37 - 19                  No semicolon
    /* DISPLAY RESULTS //               Incorrect termination of comment
    printf("The answer is %i\n" sum);   No comma
    return 0;
}

*/

/*  Corrected Program   */

#include <stdio.h>

int main(void){
    int sum;

    // compute results
    sum = 25 + 37 - 19;

    // display results
    printf("The answer is %i\n", sum);

    return 0;
}