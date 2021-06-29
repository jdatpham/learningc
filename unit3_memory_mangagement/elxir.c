#include <stdio.h>

int main(void) {

    int age;



    scanf("%d", &age);
    int * ageptr = &age;

    printf("The secret address is... ");

    printf("%p \n", ageptr);

    printf("Now take three drops of the magic elixir. \n");

   age = age - 5;

    printf("Did the elixir work? You are %d years old!", age);

    return 0;

}
