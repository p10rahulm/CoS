#include <stdio.h>

void main(void){
    int input,numdigits;
    printf("please enter number for which you want the digits checked.\n");
    scanf("%d",&input);
    for(numdigits = 0;input!=0;numdigits++){
        input/=10;
    }
    printf("number of digits = %d",numdigits);
}