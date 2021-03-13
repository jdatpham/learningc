#include <stdio.h>

int main(void) {
    char name[101];
    char name1[101];
    int num = 0;
    int i = 0;

    scanf("%d", &num);
    for(i = 0; i < num; i++){
        scanf("%s %s", name, name1);
        printf("%s %s\n", name1, name);
    }

    return 0;
}
    