#include <stdio.h>

void main(void){
    int num,reversed_number=0;
    printf("please enter number to check\n");
    scanf("%d",&num);
    
    for(int tempnum = num;tempnum!=0;tempnum/=10){
        reversed_number  = reversed_number*10 + tempnum%10;
    }
    printf("reversed number = %d\n",reversed_number);
    printf("Therefore the number is ");
    if(num!=reversed_number)printf("not ");
    printf("a palindromic number\n");

}