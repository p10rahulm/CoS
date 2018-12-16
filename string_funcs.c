#include <stdio.h>
int stringcmp(char* s, char* t){
    while(*s == *t){
        if(*s=='\0') return(0);
        s++;t++;
    }
    return(*s - *t);
}
void stringcat(char s[],char t[]){
    int i=0,j=0;
    while(s[i]!='\0')i++;
    while((s[i++]=t[j++]) != '\0');
}
void stringcpy(char*copy_from, char* copy_to){
    while(*copy_to++=*copy_from++);
}
int stringlen(char given_string[]){
    int i =0;
    while(given_string[i++]!='\0');
    return i-1;
}
void swap_characters(char a[], int pos1,int pos2){
    char temp = a[pos1];
    a[pos1] = a[pos2];
    a[pos2]=temp;
}

void stringreverse(char* s){
    int i =0 ,j;
    j = stringlen(s)-1;
    while(i<j)swap_characters(s,i++,j--);
}

void main(void){
    char a[] = "abce";
    char b[] = "abcd";
    char c[] = "abcf";
    char d[24] = "abcde";
    stringcpy(a,b);
    stringcat(d,a);
    printf("%s %d %d\n", d,stringcmp(a,b),stringcmp(a,c));
    printf("length of d is %d, of a is %d\n", stringlen(d), stringlen(a));
    printf("string d is %s\n", d);
    stringreverse(d);
    printf("reversed string d is %s\n", d);
    stringreverse(d);
    printf("reversed reversed string d is %s\n", d);
}