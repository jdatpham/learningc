#include <stdio.h>
int main(void) {
    int i = 0;
    int found = 0;
    char word[50];
    
    scanf("%s", word);
    int l = 0;
    while(word[l] != 0){
        l++;
    }
    for(i = 0; i < l; i++){
        if(word[i] == 'T' || word[i] == 't'){
            found = 1;
            break;
        }
    }
    if(found == 0){
        printf("-1\n");
    }
    else{
        if(i <= l / 2){
            printf("1\n");
        }
        else if(i >= l / 2){
            printf("2\n");
        }
    }

    return 0;
}
