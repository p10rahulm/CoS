#include <stdio.h>

float absolute(float num){
    float output;
    (num<0)?(output = -num):(output = num);
    return output;
}
double sqroot(double num){
    double guess = 1.0;
    double error = 0.001;
    double mynum = (double) num;
    while(absolute(guess*guess - mynum)>error){
        guess = (guess + mynum/guess)/2.0;
    }
    return guess;
}
