#include <stdio.h>

void main(void){
    int size;
    printf("Please enter the size of the pyramid\n");
    scanf("%d",&size);
    for(int i = 0;i<size;i+=2){
        for(int j = 0;j<=(size - i)/2;j++){
            printf("  ");
        }
        for(int j = 0;j<=i;j++){
            printf("* ");
        }
        for(int j = 0;j<=(size - i)/2;j++){
            printf("  ");
        }
        printf("\n");
    }
}