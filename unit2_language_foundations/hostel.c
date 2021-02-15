#include <stdio.h>

int main(void) {
    int hour;
    int cost;

    scanf("%d", &hour);
    if(hour < 0 || hour > 12){
        printf("Invalid Input. Must be between 0 and 12\n");
        return -1;
    }
    cost = 10 + hour * 5;

    if(cost > 53){
        cost = 53;
    }
    
    printf("%d\n", cost);

    return 0;
}