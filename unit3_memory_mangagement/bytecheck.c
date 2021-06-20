#include<stdio.h>
int main(void){
    int in;
    int time;
    char word;
    int i;
    int final;
    scanf("%d", &time);
    for(i=0;i<time;i++){
    scanf("%d %c", &in, word);
    if(word == 'i'){
       final = in * 4; 
    }
    else if(word == 'c'){
        final = in * 1;
    }
    else if(word == 'd'){
        final = in * 8;
    }
    }
    printf("%d bytes\n", final);
    return 0;
}