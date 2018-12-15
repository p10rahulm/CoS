#include <stdio.h>

void main(void){
    int height;
    printf("Please enter the height of the pyramid\n");
    scanf("%d",&height);
    for(int i = 0;i<height;i+=1){
        for(int j = 0;j<(height - i - 1);j++){
            printf("  ");
        }
        for(int j = 0;j<2*i+1;j++){
            printf("* ");
        }
        // Below is not necessary as there anyway is whitespace on the right
        // for(int j = 0;j<(height - i - 1);j++){
        //     printf("  ");
        // }
        printf("\n");
    }
}