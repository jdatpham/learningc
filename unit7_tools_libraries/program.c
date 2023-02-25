#include <stdio.h>
#include <math.h>
int main() {
    int user;
    
    scanf("%d", &user);
    printf("%.8lf\n", sqrt(user));
    printf("%.10lf\n",exp(1));
    printf("gcc -std=c11 -Wall -fmax-errors=10 program.c -o  program -lm\n");
    return 0;
}