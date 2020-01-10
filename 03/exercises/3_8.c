/*  To round off an integer i to the next largest even multiple of another
    integer j, the following formula can be used:

        Next_multiple = i + j - i % j

    For example, to round off 256 days to the next largest number of days evenly divisible by a week, values of i = 256 and j = 7 can be substituted into the preceding formula as follows:

    Next_multiple   = 256 + 7 - 256 % 7
                    = 256 + 7 - 4
                    = 259
*/

#include <stdio.h>

int main(void){
    int i = 256, j = 7;

    printf("%i\n", i + j - i % j);  
}