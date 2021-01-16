#include <stdio.h>
int main(void) {
    double km;
    double miles;

    scanf("%lf",&km);
    miles = 0.621371*km;
    printf("%lf\n",miles);
    return 0;
}