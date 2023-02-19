#include <stdio.h>
#include <math.h>
#include "library.h"


int main(){
    int a = 3;
    int b = 100;
    int c = special_add(a, b);
    printf("Special add %d # %d = %d\n", a, b, c);

    while(1){
        double x;
        double val;
        scanf("%lf", &x);
        if((x  + 1.0) < 0.1)
            break;

        val = sqrt(x);

        printf("Square root of %lf is %lf\n",  x, val);
        printf("Floor of %lf is: %lf\n", val, floor(val));
        printf("Ceilling of %lf is: %lf\n",val, ceil(val));
        printf("Rounding to integer of %lf is: %d\n",val, (int)(val));
        printf("Floor of %lf is: %lf\n", -val, floor(-val));
        printf("Ceilling of %lf is: %lf\n",-val, ceil(-val));
        printf("Rounding to integer of %lf is: %d\n",-val, (int)(-val));
    }
}