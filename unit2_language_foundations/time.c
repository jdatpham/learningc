#include <stdio.h>

int main(void) {
    char letter[101];
    int num = 0;
    int i = 0;

    scanf("%d", &num);
    scanf("%s", letter);
    for(i = 0; i < num; i++){
        printf("%s\n", letter);
    }
    return 0;
}