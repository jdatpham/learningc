# include<stdio.h>

int main(void) {
    float a;
    float b;
    float c;
    printf("Enter first parameter: \n");
    scanf("%f", &a);

    printf("Enter first parameter: \n");
    scanf("%f", &b);

    printf("Enter first parameter: \n");
    scanf("%f", &c);

    // ax + b = c
    printf("Solve the equation: %.2fx + %.2f = %.2f\n", a, b, c);
    // ax + b - b = c - b
    printf(" <=> %.2fx + %.2f - %.2f = %.2f - %.2f\n", a, b, b, c, b);
    // ax = c - b
    printf(" <=> %.2fx = %.2f\n", a, c-b);
    // x = (c-b)/a
    printf(" <=> x = %.2f/%.2f  \n", c-b, a);
    // x = result
    printf(" <=> x = %.2f\n", (c - b)/a);


    return 0 ;
}