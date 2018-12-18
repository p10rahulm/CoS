
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#define ARR_MAX 100
#define INIT_STACK(X) Stack X = {.top = -1, .stack_array ={0}}

typedef struct stack_s {
    int stack_array[ARR_MAX];
    int top;
} Stack;

Stack* create_stack(void){
    Stack* newstack = (Stack*)malloc(sizeof(Stack));
    newstack->top=-1;
    return newstack;
}

void push(int element,Stack* stack){
    if(stack->top==ARR_MAX){printf("overflow");return;}
    stack->stack_array[++stack->top]=element;
}
int pop(Stack* stack){
    if(stack->top==-1){printf("underflow");return ('\0');}
    return(stack->stack_array[stack->top--]);
}
void main(void){
    // 1. Through a macro
    INIT_STACK(mystack);
    Stack*a = &mystack;
    // 2. through a factory function
    Stack*b = create_stack();
    for(int i =0;i<10;i++)push(i,b);
    while(b->top!=-1){
        printf("%d",pop(b));
    }
    
}
