#include <stdio.h>
int main(void) {
    int age;
    printf("What is your age?\n");
    scanf("%d",&age);

    if(age >= 13 && age < 65 || age == 95){
        printf("You are in the labor force\n");
    }else{
        printf("You are not in the labor force\n");
    }
    return 0;
}