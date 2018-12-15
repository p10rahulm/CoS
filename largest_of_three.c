#include <stdio.h>
void main(void){
    int n1, n2,n3;
    printf("enter three numbers separated by enter or space.\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2&&n1>n3)printf("largest number is %d",n1);
    else if (n2>n3) printf("the largest number is %d", n2);
    else printf("largest number is %d", n3);
}