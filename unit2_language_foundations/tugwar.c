#include <stdio.h>

int main(void) {
    int i;
    int people;
    int team1 = 0;
    int lb1;
    int team2 = 0;
    int lb2;
    int winner = 0;

    scanf("%d", &people);
    for(i = 0; i < people; i++){
        scanf("%d", &lb1);
        team1 = team1 + lb1;
        scanf("%d", &lb2);
        team2 = team2 + lb2;
    }

    if(team1 > team2){
        
        winner = 1;
    }  
    else if(team1 < team2){
        winner = 2;

    }
    else {
        // team 1 = team 2
        winner = 0;
    }

    printf("Team %d has an advantage\n", winner);

    printf("Total weight for team 1: %d\n", team1);
    printf("Total weight for team 2: %d\n", team2);

    return 0;
}