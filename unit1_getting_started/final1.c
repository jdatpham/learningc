// Final project of unit one - Getting Started
// Finds average of rolling three digit (1-6) numbers 

// You are rolling a red, a yellow and a green standard dice (whose sides 
// each have the numbers 1-6 on them) and combine them to a 3-digit number
// by using the red value as the ones place, the yellow value as the tens
// place and the green value as the hundreds place. For example, if you
// rolled a 3 with red, a 5 with yellow and 2 with green then the combined
// 3-digit number would be 253.

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

    // Step 1: get number of 3-digit numbers
    scanf("%d", &num);
    
    for(i = 0; i < num; i++) {

        // Step 2: get each digit (dice)
        printf("Enter red 1-6\n");
        scanf("%d", &red);
        printf("Enter yellow 1-6\n");
        scanf("%d", &yellow);
        printf("Enter green 1-6\n");
        scanf("%d", &green);

        // Step 3: caluclate the number based on its digits
        combine = green * 100 + yellow * 10 + red * 1;
        printf("combine %d\n", combine);

        // Step 4: calculate the sum
        sum = sum + combine;
        printf("sum %d\n", sum);

        // Step 5: calculate avearge
        average = (double)sum/(double)(i + 1);
        printf("average %d\n", average);

        //Step 6: print out the final statement
        printf("%d. you rolled: %d current average:%.1f\n",i + 1 , combine, average);
    }

     return 0;
}