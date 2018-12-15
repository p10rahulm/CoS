#include <stdio.h>

void main(void){
    int A = 60; //0011 1100
    int B = 13; //0000 1101
    printf("%d\n", A&B); // 0000 1100 = 12
    printf("%d\n", A|B); // 0011 1101 = 61
    printf("%d\n", A^B); // 0011 0001 = 49 xor
    printf("%d\n", ~A); // 1100 0011 = -61
    printf("%d\n", A<<2); // 1111 0000 = 240
    printf("%d\n", A>>2); // 0000 1111 = 15

}
