#include <stdio.h>
#include <stdbool.h>
void main(void){
    char oper;
    float a,b;
    bool invalid = true;
    while(invalid){
        printf("Enter two numbers separated by space or enter\n");
        scanf("%f %f",&a,&b);
        printf("Enter an operator\n");
        // Leave a star before scanf! makes sure the last enter is not read.
        scanf(" %c",&oper);
        switch(oper){
            case '+': printf("%f + %f is: %f",a,b,a+b);invalid=false;break;
            case '-': printf("%f - %f is: %f",a,b,a-b);invalid=false;break;
            case '*': printf("%f * %f is: %f",a,b,a*b);invalid=false;break;
            case '/': printf("%f / %f is: %f",a,b,a/b);invalid=false;break;
            case '%': printf("%.2f mod %.2f is: %.2f",a,b,((int)a) % ((int)b));invalid=false;break;
            default: printf("please input valid operator\n");

        }
    }

}