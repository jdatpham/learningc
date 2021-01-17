#include <stdio.h>
int main(void) {
    double temp_c;
    double temp_f;
    
    scanf("%lf", &temp_c);
    temp_f = temp_c * 9.0 / 5.0 + 32.0;
    printf("%.1lf\n", temp_f);
        
    return 0;
}