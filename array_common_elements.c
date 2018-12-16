#include <stdio.h>
#include <stdbool.h>

int array_len(int arr[]){
    int i =0;
    while(arr[i]!='\0')i++;
    return i;
}
bool iscommon(int a[], int b[]){
    int size_a = array_len(a);
    int size_b = array_len(b);
    bool common=false;

    for(int i =0;i<size_a&&!common;i++){
        for(int j =0;j<size_b&&common==false;j++){
            if(a[i]==b[j]){common=true;}
        }
    }
    return common;
}
void main(void){
    int a[] = {1,2,3,4,5};
    int b[] = {40,50,6,7,8};
    printf("the arrays a and b have ");
    iscommon(a,b)?printf("something "):printf("nothing ");
    printf("in common");
}