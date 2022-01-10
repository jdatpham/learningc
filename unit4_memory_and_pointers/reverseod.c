#include <stdio.h>
int main(void){
    char word[69][40];
    int i;
    int j;
 
    for(i=0; i<68; i++){
    
        scanf("%s", word[i]);
    }
    char temp;
    // Move from begin and end. Keep
    // swapping strings. 
    for (i = 0; i < 34; i++) {
        for(j = 0; j < 40; j++){
            temp = word[i][j];
            word[i][j] = word [68 - i][j];
            word[68 - i][j] = temp;

        }
 
    } 
    for(i=0; i<68; i++){
        printf("%s ", word[i]);
    }
    printf("/n");
    return 0;
}