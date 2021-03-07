#include <stdio.h>

int main(void) {
    int roll = 0;
    int num = 0;
    int try = 0;

    scanf("%d", &num);
    while(roll != num){
        try++;
        scanf("%d", &roll);
        if(roll < num){
            printf("it is more\n");
        }
        if(roll > num){
            printf("it is less\n");
        }
    }
    printf("Number of tries needed:\n%d\n", try);

    return 0;
}