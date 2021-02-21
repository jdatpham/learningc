#include <stdio.h>
int main(void) {
    int cars;
    double array[50];
    double total = 0;
    int i;
    double average = 0;

    scanf("%d", &cars);
    if(cars < 1||cars > 50){
        printf("invaild number entered should be from 1 - 50\n");
        return -1;
    }
    for(i = 0; i < cars; i++){
        scanf("%lf", &array[i]);
        total = array[i] + total;    
    }
    average = total / cars;
    for(i = 0; i < cars; i++){
        array[i] = average - array[i];
        printf("%.1lf\n", array[i]);
    }
   return 0;
}