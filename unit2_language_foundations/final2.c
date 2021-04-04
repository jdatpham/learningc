#include <stdio.h>
int main(void){
    int i;
    int j;
    int people;
    int place[30];
    int temp = 0;
    char name[50];
    int score[100];

    scanf("%d", &people);
    for(i = 0; i < people; i++){
        scanf("%d", &score[i]);
        place[i] = i;
    }

    //Debug here
    /*
    for(i = 0; i < people; i++){
        printf(" %d \n", score[i]);
    }
    */
    //Debug

    for(i = 0; i < people - 1; i++){
        for(j = i + 1; j < people; j++){
            if(score[i] < score[j]){
               // printf("Before score[i]= %d; score[j]= %d\n", score[i], score[j]);
                temp = score[i];
                score[i] = score[j];
                score[j] = temp;
                //printf("After score[i]= %d; score[j]= %d\n", score[i], score[j]);

                temp = place[i];
                place[i] = place[j];
                place[j] = temp;
                //printf("place[i] = %d; place[j] = %d\n", place[i], place[j]);
              
            }
        }
    }
    
    /*
    //Debug here
    for(i = 0; i < people; i++){
        printf(" %d \n", score[i]);
    }
    printf("Places \n");
    for(i = 0; i < people; i++){
        printf(" %d \n", place[i]);
    }
    //Debug
    */

    for(i = 0; i < people; i++){
        scanf("%s", name);
        for(j = 0; j < people; j++){
            if(place[j] == i){
                printf("%s rank is %d\n", name, j + 1);
                break;
            }
        }
    }
    return 0;
}