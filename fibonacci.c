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
    printf("sequence number %d in the fibonacci sequence is %d\n",num, fib(num));
    // now we will print all fibonacci numbers till the nth number.
    printf("The numbers in the sequence till sequence number %d are\n",num);
    for(int i =1; i<=num; i++){
        printf("%d",fib(i));
        if(i!=num)printf(", ");
    }
}