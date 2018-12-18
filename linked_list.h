#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
void traverse_print_recursive(struct node* mynode){
    if(mynode){
        printf("%d\n",mynode->value);
        traverse_print_recursive(mynode->link);
    }
}
void traverse_print_reverse(struct node* mynode){
    if(mynode){
        traverse_print_reverse(mynode->link);
        printf("%d\n",mynode->value);
    }
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
struct node* find_node_by_value(struct node* head,int value_to_find){
    struct node* temp = head;
    while(temp->link){
        if(temp->value==value_to_find)return temp;
        temp=temp->link;
    }
    return NULL;
}
void print_value_of_node(struct node* node){
    printf("%d",node->value);
}
struct node* insert_new_node_after(struct node* given_node,int nodevalue){
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    newnode->value = nodevalue;
    newnode->link = given_node->link;
    given_node->link = newnode;
    return newnode;
}
struct node* delete_node(struct node* head, struct node* node_to_delete){
    if(head==node_to_delete){
        if(head==NULL){
            return NULL;
        } else if(head->link==NULL){
            free(head);
            head=NULL;
            return NULL;
        } else{
            struct node* temp= head;
            head = head->link;
            free(temp);
            return head;
        }
    } else {
        struct node* temp = head;
        while(temp->link){
            if(temp->link==node_to_delete){
                temp->link = node_to_delete->link;
                free(node_to_delete);
                return(head);
            }
        }
    }
}
struct node* delete_node_by_value(struct node* head, int deletenode_value){
    if(head->value==deletenode_value){
        if(head==NULL){
            return NULL;
        } else if(head->link==NULL){
            free(head);
            head=NULL;
            return NULL;
        } else{
            struct node* temp= head;
            head = head->link;
            free(temp);
            return head;
        }
    } else {
        struct node* temp = head;
        while(temp->link){
            if(((temp->link)->value)==deletenode_value){
                struct node* node_to_delete = temp->link;
                temp->link = node_to_delete->link;
                free(node_to_delete);
                return(head);
            }
        }
    }
}
struct node* iterative_reverse(struct node *head){
    struct node *prev=NULL,*curr=head,*curr_next=head->link;
    while(curr){
        curr_next = curr->link;
        curr->link = prev;
        prev =curr;
        curr =curr_next;
    }
    head = prev;
    return head;
}
struct node* recursive_reverse(struct node* prev,struct node *curr){
    struct node *curr_next=curr->link;
    curr->link = prev;
    if(!curr_next)return(curr);
    return(recursive_reverse(curr,curr_next));
}

