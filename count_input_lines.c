#include <stdio.h>

void main(void){
    int linecount=0,ch;
    while((ch=getchar())!=EOF){
        if(ch=='\n')linecount++;
    }
    printf("number of lines = %d",linecount);
}