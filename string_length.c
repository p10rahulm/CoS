#include <stdio.h>
int strlength(char s[]){
    int l =0;
    while(s[l]!='\0')
        l++;
    return l;
}
void main(void){
    char mystring[] = "hi";
    printf("%d\n",strlength(mystring));
    char other[] = "n";
    // char other[] = 'n'; does not work
    printf("%d",strlength(other));
}