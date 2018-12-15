#include <stdio.h>
#include <stdbool.h>
#include "sqrt.h"

void main(void){
    int num,root;
    printf("please enter number to check\n");
    scanf("%d",&num);
    root = (int)(sqroot((double) num));
    // printf("num is %f and sqrt is %f",num,sqroot(num));
    bool isprime = true;
    for(int i = 2;i<=root&&isprime==true;i++){
        if(num%i==0){
            isprime=false;
            break;
        }
    }
    printf("The number %d is ",num);
    isprime?printf("prime\n"):printf("not prime\n");
}