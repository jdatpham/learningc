#include <stdio.h>
int main(void){
    char word[99][40];
    int i;
    int j;
    for(i=0; i<68; i++){
    
        scanf("%s", word[99][40]);
    }
    char* temp;
  
    // Move from begin and end. Keep
    // swapping strings. 
    int j = 34 - 1;
    for (int i = 0; i < j; i++) {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
        j--;
    } 
    return 0;
}