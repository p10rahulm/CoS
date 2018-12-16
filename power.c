#include <stdio.h>

int power(int base,int power){
    int out = 1;
    for(int i = 0;i<power;i++)
        out *= base;
    
    return out;
}

void main(void){
    int base, pow,output;
    printf("please enter base\n");
    scanf("%d",&base);
    printf("please enter power\n");
    scanf(" %d",&pow);
    printf("base^power = %d",power(base,pow));
}