#include <stdio.h>
long factorial(int n){
    long fact=1;
    for(int i =1;i<=n;fact*=i,i++);
    return fact;
}
void main(void){
    printf("please enter a number for which you want factorial\n");
    int num;
    scanf("%d",&num);
    printf("factorial is %ld",factorial(num));
}