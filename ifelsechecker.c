#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void main(void){
    char inpt[5];
    while(true){
        printf("Do you want to say hello to cow?: Yes or No\n");
        scanf("%s",&inpt);
        // printf("input = %s\n",inpt);
        if(strcmp(inpt,"Yes") == 0 || strcmp(inpt,"yes") == 0 ){
            printf("o   ^__^\n");
            printf(" o  (oo)\\_______\n");
            printf("o   ^__^         \\\n");
            printf("        ||----w |\n");
            printf("        ||     ||\n");
            break;
        }
        else if(strcmp(inpt,"No") ==0 || strcmp(inpt,"no") ==0) {
            printf("Sad to see you go, bye!");         
            break;
        }
        else printf("please check inputs.\n");
    }
}