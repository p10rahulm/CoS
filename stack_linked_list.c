
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "linked_list.h"

// top of stack is at head of linked list

typedef struct stack_s {
    struct node* head;
} Stack;

Stack* create_stack(){
    Stack* a = (Stack*)malloc(sizeof(Stack));
    a->head = NULL;
    return a;
};

void push(Stack* a, int value){
    if(a->head==NULL){
        struct node* mynode = (struct node*) malloc(sizeof(struct node));
        a->head = mynode;
        mynode->value = value;
        mynode->link = NULL;
    } else {
        struct node* mynode = (struct node*) malloc(sizeof(struct node));
        if(mynode==NULL){printf("malloc error");return;}
        mynode->value = value;
        mynode->link = a->head;
        a->head = mynode;
    }
}
int pop(Stack* a){
    if(a->head==NULL)return'\0';
    struct node* mynode = a->head;
    (!mynode->link)?(a->head = NULL):(a->head = mynode->link);
    int returnval = mynode->value;
    free(mynode);
    return(returnval);
}


void main(void){
    int popped;
    Stack* a = create_stack();
    for(int i =0;i<10;i++)push(a,i);
    traverse_and_print(a->head);
    while((popped = pop(a))!='\0'){
        printf("%d",popped);
    }
    traverse_and_print(a->head);
    
}