#include <stdio.h>

void main(void){
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
    // using ternary operator instead of if condition
    num%2==0?printf("even"):printf("odd");
}