#include <stdio.h>

int main(void) {
    int time;
    int cost;
    int total;

    scanf("%d %d", &time, &cost);
    total = time + cost;
    if (total > 10){
        total = 36;
        printf("specal tax \n %d\n", total);

    }
    else{
        total = (cost + time) * 2;
        printf("regular tax %d\n", total);

    }
    return 0;
}