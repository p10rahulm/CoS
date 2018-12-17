#include <stdio.h>
#include <stdlib.h>

#define DEFAULT_SIZE 100

char* resize(char* char_array_pointer, int current_size){
    return realloc(char_array_pointer,current_size + DEFAULT_SIZE);
}

void main(void){
    int count = 0,capacity = DEFAULT_SIZE, i =0;
    char *input;
    char ch;
    // input = (char *)malloc(DEFAULT_SIZE*sizeof(char));
    input = malloc(DEFAULT_SIZE * sizeof(char));
    ch=getchar();
    for (i = 0; ch!=EOF; i++) {
        if(i==capacity){
            input = resize(input,capacity);
            capacity += DEFAULT_SIZE;
        }
        input[i]=ch;
        printf("%c",input[i]);
        ch=getchar();
    }
    input[i] = '\0';
    printf("%s",input);
    free(input);
}
