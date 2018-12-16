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
char* inttos(int n, char s[]){
    int i, temp;
    (n<0)?temp=-n:(temp = n);
    
    s[0] = temp%10 +'0';
    temp/=10;
    for(i=1;temp!=0;i++){
        s[i] = temp%10 +'0';
        temp/=10;
    }
    // a nearly unreadable for loop doing the above in 1 line
    // for(s[0] = temp%10 +'0',temp/=10,i=1;temp!=0;s[i++] = temp%10 +'0',temp/=10);

    if(n<0)(s[i++] = '-');
    s[i]='\0';
    stringreverse(s);
    return s;
}
int ascii_to_int(char s[]){
    int i,n,start_i;
    n=0;
    s[0]=='-'?(start_i = 1):(start_i = 0);
    for(i=start_i;s[i]>='0'&&s[i]<='9';i++){
        n *=10;
        n+= (s[i]-'0');
    }
    if(start_i==1)n*=-1;
    return n;
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
    int n = 123;
    char e[5];
    printf("123 as string is %s\n",inttos(n,e));
    printf("-123 as string is %s\n",inttos(-n,e));
    printf("0 as string is %s\n",inttos(0,e));
    char f[4] = "123";
    printf("the number 123 converted to int is %d\n",ascii_to_int(f));
    // you can't simply assign to existing arrays
    stringcpy("-123",f);
    printf("the number -123 converted to int is %d\n",ascii_to_int(f));
}