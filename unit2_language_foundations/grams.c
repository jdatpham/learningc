#include <stdio.h>
int main(void) {
    int array[10];
    int i;
    int grams = 0;
    int id = 0;
    //int rand;

    ///printf("rand %d\n", rand);

    for(i = 0; i < 10; i++){
        scanf("%d", &grams);
        array [i] = grams;
    }

    scanf("%d", &id);
    if(id < 0 || id >= 10){
        printf("invalid index entered\n");
        return -1;
    
    }
    printf("%d\n", array[id]);
    return 0;
}