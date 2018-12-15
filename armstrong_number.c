#include <stdio.h>
#include "count_digits.h"
#include <math.h>
// an armstrong number is a number that equals the sum of each of the digits to the power number of digits 
// someresources say an armstrong number is to the power 3, which is probably easier to implement

void main(void){
    int num,digits;
    printf("enter number to check as an armstrong number\n");
    scanf("%d",&num);
    digits = num_digits(num);
    // printf("num digits = %d",digits);
    int tempnum = num,sum = 0;
    while(tempnum!=0){
        sum+=pow(tempnum%10,digits);
        tempnum/=10;
    }
    printf("The number %d is ", num);
    if(sum!=num)printf("not ");
    printf("an armstrong number");
}