// Convert double to intger
// Calculate the cement cost based on weight in pounds
#include <stdio.h>

int main(void) {
    double cement;
    int bags;
    int cost;

    // input cement pounds
    scanf("%lf", &cement);
    // solves number of bags. Each bag costs $120
    bags = (int) cement/120 + 1;
    cost = bags * 45;
    // prints out cost
    printf("%d", cost);
    printf("\n");

    return 0;
}