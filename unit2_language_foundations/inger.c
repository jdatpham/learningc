#include <stdio.h>

int main(void) {
    
    int num;
    double weight[10];
    double total = 0;
    double price[10];
    int i;
    
    scanf("%d", &num);
    for(i = 0; i < num ; i++){
        scanf("%lf", &weight[i]);
    }
    for(i = 0; i < num ; i++){
        scanf("%lf", &price[i]);
    }

    total = 0;
    for(i = 0; i < num ; i++){ 
        total = total + price[i] * weight[i];
    }
    printf("%.6lf\n", total);
   
   return 0;
}