#include <stdio.h>
int main(void) {
    double cement;
    int bags;
    int cost;

    // input cement pounds
    scanf("%lf", &cement);
    // solves number of bags
    bags = (int) cement/120 + 1;
    cost = bags * 45;
    // prints out cost
    printf("%d", cost);
    printf("\n");

    return 0;
}