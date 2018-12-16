#include <stdio.h>

void swap(int*,int*);

void main(void){
    int a,b;
    printf("Enter two numbers separated by space or enter\n");
    scanf("%d %d",&a,&b);
    printf("the numbers you entered are a = %d and b = %d\n",a,b);
    swap(&a,&b);
    printf("the numbers after swapping are a = %d and b = %d",a,b);
}
void swap(int* a, int* b){
    int temp = *b;
    *b = *a;
    *a = temp;
}