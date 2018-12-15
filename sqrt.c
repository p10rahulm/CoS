#include <stdio.h>
float absolute(float num){
    float output;
    (num<0)?(output = -num):(output = num);
    return output;
}
float sqroot(float num){
    float guess = 1.0;
    float error = 0.0001;
    while(absolute(guess*guess - num)>error){
        guess = (guess + num/guess)/2;
    }
    return guess;
}

void main(void){
    float num = 10.0;
    float sqrt_num = sqroot(num);
    float abs = absolute(-num);
    printf("sqrt of %f = %.4f\n",num,sqrt_num);
    printf("absolute value of %f = %2.2f",-num,abs);
}