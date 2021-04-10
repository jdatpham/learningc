#include <stdio.h>
int main(void){
    int change;
    int i;
    int j;
    int num;

    scanf("%d", &num);
    change = 0;
    if(num >= 2 && num <= 12){
        for(i = 1; i < 6; i++){
            for(j = 1; j < 6; j++){
                if(j + i == num){
                    change++;
                }
            }
        }
    }
    else{
        printf("Not Found\n");
    }
    printf("The chances are %d/36\n", change);

    return 0;
}