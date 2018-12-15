#include <stdio.h>

void main(void){
    int size;
    printf("Please enter the size of the pyramid\n");
    scanf("%d",&size);
    for(int i = 0;i<size;i++){
        for(int j = 0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}