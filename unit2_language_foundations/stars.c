#include <stdio.h>

int main(void) {

    int num;
    int i;
    int j;

    scanf("%d", &num);
    for(i = 0; i < num; i++){
        for(j = 0; j < num; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}