#include <stdio.h>
#include <math.h>
#include "robot.h"
#include "sensor.h"


int main(){
    double euler = exp(1);

    printf("Euler constant is %lf\n", euler);

    printf("Robot move: %d\n", robot_move(10));

    printf("Current temperature %d\n",read_temperature());

    printf("Current velocity %d\n", read_velocity());
}