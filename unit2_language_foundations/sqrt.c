#include <stdio.h>

//find the square root of a number 
//using binary search
int main(void){

    double error = 5.0;
    double x;
    double ACC = .0000001;
    double mid;
    double end;
    double start = 0.0;

    scanf("%lf", &x);
    end = x;
 
    while(error > ACC){
        mid = (start + end) / 2;
        printf("mid=%lf\n", mid);
        error = mid * mid - x;
        if(error == 0){
            break;
        }
        else if(error < 0){
            start = mid;
            error = error * (-1);
        }
        else{
            end = mid;
        }
    }
    printf("The square root of %.2lf is %lf\n", x, mid);

    return 0;
}