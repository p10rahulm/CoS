#include <stdio.h>
void main(void){
    char x;
    while ((x = getchar())!=EOF){
        if(x != '\n') printf("the character you entered is ");
        putchar(x);
        printf("\n");
    }
}