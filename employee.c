#include <stdio.h>
struct emp{
    char name[10];
    int age;
};
void main(void){
    struct emp emp1;
    char buffer[25];
    char* out;
    FILE *p, *q;
    p = fopen("test.txt","w");
    q = fopen("test.txt","r");
    printf("Enter a name and age\n");
    // I'm told a combination of fgets and sscanf are better than using scanf as scanf is prone to failure.
    
    while((out = fgets(buffer,25,stdin))!=NULL){
        sscanf(buffer,"%s %d",&(emp1.name),&(emp1.age));
        fprintf(p,"%s\t %d\n",emp1.name,emp1.age);
        printf("emp.name = %s, emp.age = %d\n",emp1.name,emp1.age);
        // scanf("%s %d",&(emp1.name),&(emp1.age));
    } ;
    fclose(p);
    while((out = fgets(buffer,25,q))!=NULL&&*buffer!='\n'){
        sscanf(buffer,"%s %d",&(emp1.name),&(emp1.age));
        // fscanf(q,"%s\t %d",&emp1.name,&emp1.age); //recommended not to use fscanf or scanf. use combo of gets and sscanf
        printf("\n%s %d",emp1.name,emp1.age);
    } ;

}