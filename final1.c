#include <stdio.h>
int main(void) {
    int num;
    int green;
    int yellow;
    int red;
    int combine;
    double average;
    int i;
    int sum = 0;

    
    scanf("%d", &num);
    
    for(i = 0; i < num; i++) {
        //printf(" i = %d\n", i);
        printf("Enter red 1-6\n");
        scanf("%d", &red);
        printf("Enter yellow 1-6\n");
        scanf("%d", &yellow);
        printf("Enter green 1-6\n");
        scanf("%d", &green);
    
        combine = green * 100 + yellow * 10 + red * 1;
        //printf("combine %d\n", combine);

        sum = sum + combine;
        //printf("sum %d\n", sum);

        average = (double)sum/(double)(i + 1);
        //printf("average %d\n", average);

        printf("%d. you rolled: %d current average:%.1f\n",i + 1 , combine, average);
    }

     return 0;
}