#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node* link;
};

int array_len(int arr[]){
    int i =0;
    while(arr[i]!='\0')i++;
    return i-1;
}

struct node* create_linked_list(int* a){
    struct node *head, *last;
    int size = array_len(a);
    // printf("size of linked list is %d\n",size);
    for(int i =0; i<size;i++){
        struct node* mynode = (struct node*) malloc(sizeof(struct node));
        i==0?(head = mynode):(last->link = mynode);
        mynode->value = a[i];
        mynode->link = NULL;
        last = mynode;
    }
    return head;
}

void traverse_and_print(struct node* head){
    struct node *nodepointer;
    nodepointer = head;
    int i =0;
    while(nodepointer!=NULL){
        printf("%d\n",nodepointer->value);
        nodepointer=(nodepointer->link);
        i++;
    }
}
struct node* insert_element_at_end(struct node* head,int nodevalue){
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    struct node *temp = head;
    while(temp->link){temp=temp->link;}
    temp->link = newnode;
    newnode->value = nodevalue;
    newnode->link = NULL;
    return newnode;
}
struct node* insert_element(struct node* head,int nodevalue){
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    newnode->value = nodevalue;
    newnode->link = head;
    head = newnode;
    return head;
}
void main(void){
    int a[] = {10,20,30,40};
    // we'll place values from above array into a linked list
    struct node* head = create_linked_list(a);
    traverse_and_print(head);
    printf("\n");
    insert_element_at_end(head,50);
    traverse_and_print(head);
    printf("\n");
    head = insert_element(head,5);
    traverse_and_print(head);
}
