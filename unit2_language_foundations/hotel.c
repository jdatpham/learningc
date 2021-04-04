#include <stdio.h>

int main(void) {
    int age = 0;
    int luggage = 0;
    int price = 0;
    int luggage_cost = 0;


    scanf("%d", &age);
    scanf("%d", &luggage);
    if (age == 60){
        price = 0;
    }
    else if (age < 10){
        price = 5;
    } 
    else {

        luggage_cost = 0;
        if(luggage > 20){
            luggage_cost =  10;
        }
        price = 30 + luggage_cost;
    }
    
    printf("%d\n", price);

    return 0;
}