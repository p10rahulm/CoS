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

struct node* create_circular_linked_list(int* a){
    struct node *head, *last;
    int size = array_len(a);
    struct node* headnode = (struct node*) malloc(sizeof(struct node));
    headnode->value = size;
    // printf("size of linked list is %d\n",size);
    for(int i =0; i<size;i++){
        struct node* mynode = (struct node*) malloc(sizeof(struct node));
        i==0?(headnode->link = mynode):(last->link = mynode);
        mynode->value = a[i];
        mynode->link = headnode;
        last = mynode;
    }
    return headnode;
}
void traverse_print_recursive(struct node* mynode,struct node* head){
    if(head!=mynode)printf("%d\n",mynode->value);
    if(mynode->link!=head){traverse_print_recursive(mynode->link,head);}
}
void traverse_print_reverse(struct node* mynode,struct node*head){
    if(mynode->link!=head){
        traverse_print_reverse(mynode->link,head);
    }
    if(mynode!=head)printf("%d\n",mynode->value);
}
void traverse_and_print(struct node* head){
    int numnodes = head->value;
    struct node* traveller = head->link;
    for(int i =0;i<numnodes;i++){
        printf("%d\n",traveller->value);
        traveller=traveller->link;
    }
}
struct node* insert_element_at_end(struct node* head,int nodevalue){
    struct node* newnode = (struct node*) malloc(sizeof(struct node));
    newnode->value = nodevalue;
    newnode->link = head;
    int numnodes = head->value;
    struct node *traveller = head;
    for(int i=0;i<numnodes;i++){
        traveller=traveller->link;
    }
    traveller->link=newnode;
    head->value++;
    return newnode;
}
struct node* insert_element(struct node* head,int nodevalue){
    struct node* newnode = (struct node*) malloc(sizeof(struct node));
    newnode->value = nodevalue;
    newnode->link = head->link;
    head->link = newnode;
    head->value++;
    return head;
}
struct node* find_node_by_value(struct node* head,int value_to_find){
    int numnodes = head->value;
    struct node* traveller = head->link;
    for(int i =0;i<numnodes;i++){
        if(traveller->value==value_to_find)return traveller;
        traveller=traveller->link;
    }
    return NULL;
}
void print_value_of_node(struct node* node){
    printf("%d\n",node->value);
}
struct node* insert_new_node_after(struct node* given_node,int nodevalue,struct node* head){
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    newnode->value = nodevalue;
    newnode->link = given_node->link;
    given_node->link = newnode;
    head->value++;
    return newnode;
}
struct node* delete_node(struct node* head, struct node* node_to_delete){
    if(head->value ==0){return NULL;}
    if(head->value ==1){
            free (head->link);
            head->value =0;
            head->link =NULL;
            return head;
    }
    // we will implement fast delete where the next pointer from node to delete will be deleted.
    int numnodes = head->value;
    struct node* traveller = head;
    for(int i =0;i<numnodes;i++){
        if(traveller->link==node_to_delete)break;
        traveller=traveller->link;
    }
    traveller->link=node_to_delete->link;
    free(node_to_delete);
    head->value--;
}
struct node* delete_node_by_value(struct node* head, int deletenode_value){
    int numnodes = head->value;
    struct node* traveller = head;
    bool found=false;
    for(int i =0;i<numnodes;i++){
        if(traveller->link->value==deletenode_value){
            found=true;
            break;
        }
        traveller=traveller->link;
    }
    if(!found)return NULL;
    struct node* node_to_delete=traveller->link;
    traveller->link=node_to_delete->link;
    free(node_to_delete);
    head->value--;
}
struct node* iterative_reverse(struct node *head){
    int numnodes = head->value;
    if(numnodes==0)return NULL;
    if(numnodes==1)return head;
    struct node *current=head->link,*previous=head,*temp;
    for(int i =0;i<numnodes;i++){
        temp=current->link;
        current->link=previous;
        previous = current;
        current = temp;
    }
    head->link=previous;
    return head;
}
struct node* recursive_reverse(struct node* prev,struct node *curr,struct node *head){
    struct node *curr_next=curr->link;
    curr->link = prev;
    if(curr==head)return(head);
    return(recursive_reverse(curr,curr_next,head));
}

void main(void){
    int a[] = {10,20,30,40};
    // we'll place values from above array into a linked list
    struct node* head = create_circular_linked_list(a);
    traverse_and_print(head);
    printf("\n");
    insert_element_at_end(head,50);
    traverse_and_print(head);
    printf("\n");
    head = insert_element(head,5);
    traverse_and_print(head);
    printf("\n");
    struct node* node20 = find_node_by_value(head,20);
    print_value_of_node(node20);
    printf("\n");
    insert_new_node_after(node20,25,head);
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
    struct node* node50 = find_node_by_value(head,50);
    head = delete_node(head,node50);
    traverse_and_print(head);
    printf("\n");
    head = insert_element(head,10);
    head = insert_element(head,5);
    insert_element_at_end(head,50);
    traverse_and_print(head);
    printf("\n");
    head = delete_node_by_value(head,5);
    head = delete_node_by_value(head,20);
    head = delete_node_by_value(head,50);
    traverse_and_print(head);
    printf("\n");
    insert_element_at_end(head,50);
    traverse_print_recursive(head,head);
    printf("\n");
    traverse_print_reverse(head,head);
    printf("\n");
    traverse_and_print(head);
    printf("\n");
    head = iterative_reverse(head);
    traverse_and_print(head);
    printf("\n");
    head = recursive_reverse(head,head->link,head);
    traverse_and_print(head);
    
}
