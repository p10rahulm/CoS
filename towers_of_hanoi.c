#include <stdio.h>
int toh(int largest_disk_no,char from, char to, char via){
    int n = 0;
    if(largest_disk_no==1){
        printf("take disk no %d from %c to %c\n",largest_disk_no,from,to);
        return 1;
    }
    n += toh(largest_disk_no-1,from, via, to);
    printf("take disk no %d from %c to %c\n",largest_disk_no,from,to);
    n += toh(largest_disk_no-1,via, to, from);
    return n+1;
}
void main(void){
    char tower_names[] = {'a','b','c'};
    printf("how many disks do you want to move?\n");
    int numdisks;
    scanf(" %d",&numdisks);
    int num_moves = toh(numdisks,tower_names[0],tower_names[1],tower_names[2]);
    printf("the total number of moves made is %d",num_moves);
}
