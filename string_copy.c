#include <stdio.h>
void stingcpy(char*copy_from, char* copy_to){
    while(*copy_to++=*copy_from++);
}
void main(void){
    char first[] = "rahul";
    char another[20];
    stingcpy(first,another);
    printf("the second string is %s",another);
}