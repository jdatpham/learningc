#include<stdio.h>
int main(void){
    int in;
    int time;
    char word;
    int i;
    int final = 0;
    scanf("%d", &time);
    for(i=0;i<time;i++){
    scanf("%d %c", &in, &word);
    if(word == 'i'){
       final = final + in * 4; 
    }
    else if(word == 'c'){
        final = final + in * 1;
    }
    else if(word == 'd'){
        final = final + in * 8;
    }
    else{
        printf("Invalid tracking code type\n");
        return 0;
    }
    }
    printf("%d bytes\n", final);
    return 0;
}