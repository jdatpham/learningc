// Finds projected population based on current population and growth rate
#include <stdio.h>
int main(void) {
    double grow_rate;
    int current_population;
    int an;

    scanf("%d", &current_population);
    scanf("%lf", &grow_rate);
    an =  current_population * (1.0 + (grow_rate/100.0));
    printf("%d\n", an);
    return 0;
}