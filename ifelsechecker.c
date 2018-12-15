#include <stdio.h>
#include <string.h>

void main(void){
    char inpt[5];
    printf("Do you want to say hello to cow?: Yes or No\n");
    scanf("%s",&inpt);
    printf("input = %s\n",inpt);
    if(strcmp(inpt,"Yes") == 0 || strcmp(inpt,"yes") == 0 ){
            printf("o   ^__^\n");
            printf(" o  (oo)\\_______\n");
            printf("o   ^__^         \\\n");
            printf("        ||----w |\n");
            printf("        ||     ||\n");
    }
}