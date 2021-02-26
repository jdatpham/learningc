#include <stdio.h>

int main(void) {

    int i;
    int cities;
    int big_cities_to_count = 0;
    int popl;

    
    scanf("%d", &cities);
    for(i = 0; i < cities; i++){
        scanf("%d", &popl);
        if(popl > 10000){
            big_cities_to_count++;
        }
    }
   
    printf("%d\n", big_cities_to_count);
    return 0;
}
