#include <stdio.h>

void main(void){
    
    // enum is like #define, it substitutes the word for a number

    // Starts with 0
    enum boolean {no,yes};
    // Starts with 1
    enum months{JAN = 1, FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC};
    
    printf("%d\n",JAN);
    printf("%d",no);
}