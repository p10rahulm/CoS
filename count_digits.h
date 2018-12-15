#include <stdio.h>

int num_digits(int num){
    int numdigits,input = num;
    for(numdigits = 0;input!=0;numdigits++){
        input/=10;
    }
    return numdigits;
}