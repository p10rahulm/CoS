#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    int value;
    struct node* previous;
    struct node* next;
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
        if(i==0){
            head = mynode;
            mynode->previous = mynode;
            mynode->next = mynode;
        } else {
            mynode->previous = last;
            mynode->next = last->next;
            last->next = mynode;
            head->previous=mynode;
        }
        mynode->value = a[i];
        last = mynode;
    }
    return head;
}
void traverse_and_print(struct node* head){
    struct node* traveller = head;
    do {
        printf("%d\n",traveller->value);
        traveller=traveller->next;
    } while(traveller!=head) ;
}
void traverse_and_print_reverse(struct node* head){
    struct node* traveller = head->previous;
    do {
        printf("%d\n",traveller->value);
        traveller=traveller->previous;
    } while(traveller!=head->previous) ;
}
void traverse_print_recursive(struct node* mynode,struct node* head){
    printf("%d\n",mynode->value);
    if(mynode->next!=head){traverse_print_recursive(mynode->next,head);}
}

struct node* insert_element_before_head(struct node* head,int nodevalue){
    struct node *newnode = (struct node*) malloc(sizeof(struct node));
    newnode->value = nodevalue;
    newnode->next = head;
    newnode->previous = head->previous;
    (head->previous)->next = newnode;
    head->previous=newnode;
    return newnode;
}
struct node* insert_element_after_head(struct node* head,int nodevalue){
    struct node *newnode = (struct node*) malloc(sizeof(struct node));
    newnode->value = nodevalue;
    newnode->next = head;
    newnode->previous = head->previous;
    head->previous->next = newnode;
    head->previous=newnode;
    head=newnode;
    return head;
}
struct node* find_node_by_value(struct node* head,int value_to_find){
    struct node* traveller = head;
    do {
        if(traveller->value==value_to_find)return traveller;
        traveller=traveller->next;
    } while(traveller!=head) ;
    return NULL;
}
void print_value_of_node(struct node* node){
    printf("%d",node->value);
}

struct node* insert_new_node_after(struct node* given_node,int nodevalue){
    struct node *newnode = (struct node*) malloc(sizeof(struct node));
    newnode->value = nodevalue;
    newnode->next = given_node->next;
    newnode->previous = given_node;
    given_node->next->previous=newnode;
    given_node->next=newnode;
    return newnode;
}
struct node* delete_node(struct node* head, struct node* node_to_delete){
    if(head->next ==head){return NULL;}
    // we will implement fast delete where the next pointer from node to delete will be deleted.
    node_to_delete->previous->next=node_to_delete->next;
    node_to_delete->next->previous=node_to_delete->previous;
    if(head==node_to_delete)head=node_to_delete->next;
    free(node_to_delete);
    return(head);
}
struct node* delete_node_by_value(struct node* head, int deletenode_value){
    struct node* node_to_delete = find_node_by_value(head,deletenode_value);
    return(delete_node(head,node_to_delete));
}
void traverse_print_reverse(struct node* mynode,struct node* head){
    printf("%d\n",mynode->value);
    if(mynode!=head){traverse_print_reverse(mynode->previous,head);}
}

struct node* recursive_reverse(struct node *curr, struct node *head){
    struct node *curr_next=curr->next,*curr_prev=curr->previous;
    curr->previous=curr_next;
    curr->next=curr_prev;
    if(curr_next==head){
        return(head->next);
    }
    return(recursive_reverse(curr_next,head));
}

void main(void){
    int a[] = {10,20,30,40};
    // we'll place values from above array into a linked list
    struct node* head = create_linked_list(a);
    traverse_and_print(head);
    printf("\n");
    insert_element_before_head(head,50);
    traverse_and_print(head);
    printf("\n");
    head = insert_element_after_head(head,5);
    traverse_and_print(head);
    printf("\n");
    struct node* node20 = find_node_by_value(head,20);
    insert_new_node_after(node20,25);
    traverse_and_print(head);
    printf("\n");
    struct node* node10 = find_node_by_value(head,10);
    delete_node(head,node10);
    traverse_and_print(head);
    printf("\n");
    struct node* node5 = find_node_by_value(head,5);
    head = delete_node(head,node5);
    traverse_and_print(head);
    printf("\n");
    head = insert_element_after_head(head,10);
    head = insert_element_after_head(head,5);
    traverse_and_print(head);
    printf("\n");
    head = delete_node_by_value(head,5);
    head = delete_node_by_value(head,20);
    traverse_and_print(head);
    printf("\n");
    traverse_print_recursive(head,head);
    printf("\n");
    traverse_and_print_reverse(head);
    printf("\n");
    traverse_print_reverse(head->previous,head);
    printf("\n");
    head = recursive_reverse(head,head);
    traverse_print_recursive(head,head);
    printf("\n");
    head = recursive_reverse(head,head);
    traverse_print_recursive(head,head);
}
