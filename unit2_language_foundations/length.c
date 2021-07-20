#include <stdio.h>
int main(void) {

    int t = 0;
    int len = 0;
    int nbWords = 0;
    char word[100];
    int max = 0;

    
    scanf("%d", &nbWords);
    for(t=0; t<nbWords; t++){
        scanf("%s", word+t);
    }
    word[t] =0;

    len = 0;
    while(word[len]!= 0){
        len++;
    }
    if(max < len)
        len = max;
        
    printf("%d\n", len);
    
    return 0;   
}

