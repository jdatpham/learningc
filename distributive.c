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

    // a * (b + c) =
    printf("distributive of mutiplcation:\n");
    printf("%.1f * (%.1f + %.1f) =\n", a, b, c);
    //= a x b + a x c
    printf("= %.2f * %.2f + %.2f * %.2f\n", a, b , a, c);
    
    //= ab + ac
    printf("= %.2f + %.2f  \n", a * b, a * c);
    //= ab+ac
    printf("= %.2f\n", a * b + a * c);


    return 0 ;
}