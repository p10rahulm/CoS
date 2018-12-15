#include <stdio.h>

void main(void){
    int num,sum=0;
    printf("Please enter a number till which you want the sum\n");
    scanf("%d",&num);

    for(int i=num;i>0;i--){
        sum +=i;
    }
    printf("summation of numbers from 1 to %d is %d",num,sum);
}