#include <stdio.h>
int main(void) {

    int t = 0;
    int l = 0;
    int nbWords = 0;
    char word[100];
    int max = 0;

    
    scanf("%d", &nbWords);
    for(t=0;t<nbWords;t++){
        scanf("%s", word);
        
        l = 0;
        while(word[l]!= '\0'){
            l++;
        }
        if(max < l)
            max = l;
        
    }
    printf("%d\n", max);
    
    return 0;   
}

