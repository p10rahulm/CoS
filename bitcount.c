#include <stdio.h>

int bitcount(unsigned x){
    int bitcount = 0;
    while(x!=0){
        if(x&1)bitcount++;
        x>>=1;
    }
    return bitcount;
}
void main(void){
    printf("the number of bits in 52 is %d and in 64 is %d", bitcount(52),bitcount(64));

}