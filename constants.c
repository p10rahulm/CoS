#include <stdio.h>
const int a =1234;
const b =1234l;
const c =12.34;
const d = 01234;
const e = 0x1234;
const f = 0x1234l;
const char g = 'x';


void main(void){
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%.2f\n",(float)c);
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%d\n",f);
    printf("%c\n",g);
    // a = a+1; this is not allowed

}