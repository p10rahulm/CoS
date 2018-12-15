#include <stdio.h>
int fib(int n){
    if(n ==1)return 1;
    if(n ==0)return 0;
    return fib(n-2) + fib(n-1);
}

void main(void){
    int num;
    printf("get the nth fibonacci number. Which n do you want?\n");
    scanf("%d",&num);
}