#include <stdio.h>

void main(void){
    int weekday;
    printf("choose a weekday from 0 to 6\n");
    scanf("%d", &weekday);
    switch(weekday){
        // only integers are allowed for case values. No integers. They can be non-contiguous. No repeats. Have to be unique. 
        // Default is not necessary to use at the end. The break statements are compulsory
        case 0: printf("Monday");break;
        case 1: printf("Tuesday");break;
        case 2: printf("Wednesday");break;
        case 3: printf("Thursday");break;
        case 4: printf("Friday");break;
        case 5: printf("Saturday");break;
        case 6: printf("Sunday");break;
        default: printf("Please enter valid value");
    }
}