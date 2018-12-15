#include <stdio.h>
void main(void){
    char x;
    while ((x = getchar())!=EOF){
        putchar(x);
    }
}