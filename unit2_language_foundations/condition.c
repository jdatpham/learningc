#include <stdio.h>

int main(void) {
    int pass;
    double gas_cost;
    double result;
    double total_cost;
    
    scanf("%d %lf", &pass, &gas_cost);

    if(pass < 0){
        printf("Invalid number of passengers\n");
        return -1;
    }
    
    
    if (pass == 0) {
        total_cost = gas_cost;
    }
    else {
        total_cost = 1 + gas_cost;
    }

    result = total_cost/(pass + 1);
    printf("%.2f\n", result);
    
    return 0;
}