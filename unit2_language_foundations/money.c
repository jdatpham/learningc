#include <stdio.h>

int main(void) {

    int money = 0;
    int sum = 0;

    while(money != -1){
        scanf("%d", &money);
        sum = sum + money;
    }
    printf("%d\n", sum + 1);

    return 0;
}