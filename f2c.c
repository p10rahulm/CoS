#include <stdio.h>
float f2c(int farenheit){
    float celcius;
    celcius = (farenheit-32)*5/9;
    return celcius;
}
void print_f2c(int lower, int step,int upper){
    printf("| Farenheit\t|\tCelcius |\n");
    for(int x =lower; x<=upper;x+=step){
        printf("| %3dF\t|\t",x);
        printf("%+4.1fC |\n",f2c(x));
    }
}

void main(void){
    int lower = 00;
    int step = 20;
    int upper = 300;
    print_f2c(lower,step,upper);

}
