#include <stdio.h>
float c2f(int celcius){
    float faren;
    faren = celcius*18/10+32;
    return faren;
}
void print_c2f(int lower, int step,int upper){
    printf("| Celcius\t|\tFarenheit |\n");
    for(int x =lower; x<=upper;x+=step){
        printf("| %dC\t|\t",x);
        printf("%0.2fF |\n",c2f(x));
    }
}

void main(void){
    int lower = 00;
    int step = 20;
    int upper = 300;
    print_c2f(lower,step,upper);

}
