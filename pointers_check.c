
#include <stdio.h>

void main(void){
    int x = 5;
    int* y = &x;
    printf("x = %d\n",x);
    printf("&x = %ld\n",&x);
    printf("y = %d\n",y);
    printf("*y = %d\n",*y);
    printf("&y = %ld\n",&y);
}