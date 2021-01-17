#include <stdio.h>

int main(void) {
    double temp_c;
    double temp_f;

    // Get the temperature input in Celcius
    scanf("%lf", &temp_c);
    // Convert Celcisus to Fahrenheit
    temp_f = temp_c * 9.0 / 5.0 + 32.0;
    printf("%.1lf\n", temp_f);
        
    return 0;
}