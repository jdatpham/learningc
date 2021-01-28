#include <stdio.h>
int main(void) {
    int output;
    int input;
    int divsor;
    int rest;
    scanf("%d %d", &input, &divsor);
    output = input/divsor;
    rest = input%divsor;
    printf("%d\n", output);
    printf("%d\n",rest);

    return 0 ;
}