#include <stdio.h>
int main(void) {

    int num[26];
    int i;
    for(i = 0; i < 26; i++){
        num[i] = 0;
    }
    char word[51];
    int multiple = 0;
    int l;

    scanf("%s", word);
    l = 0;
    while(word[l] != 0){
        num[word[l] - 'a']++;
        l++;
    }
    for(i = 0; i < 26; i++){
        if(num[i] >= 2){
            multiple++;
        }
    }
    printf("%d \n", multiple);
    return 0;
}
