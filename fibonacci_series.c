#include <stdio.h>

void main(void){
    int num;
    printf("get the fibonacci series till the nth fibonacci number. Which n do you want?\n");
    scanf("%d",&num);
    int prev =1, prev_prev=0;
    printf("The numbers in the sequence till sequence number %d are\n",num);
    if(num>=0)printf("%d ",prev_prev);
    if(num>=1)printf("%d ",prev);
    for(int i =2; i<=num; i++){
        int curr = prev + prev_prev;
        printf("%d ",curr);
        prev_prev = prev;
        prev = curr;
    }
}