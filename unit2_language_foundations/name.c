#include <stdio.h>

int main(void) {
    char name[51];
    int i = 0;

    scanf("%s", &name[i]);
    while (name[i] != '\0'){
        i++;
    }
    if(i % 2 == 0){
        printf("1\n");
    }
    else{
        printf("2\n");
    }
    return 0;
}