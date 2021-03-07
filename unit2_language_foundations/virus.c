#include <stdio.h>

int main(void) {
    int people = 0;
    int day = 0;
    int total = 1;
    //int new = 0;
     
     scanf("%d", &people);
     while(total < people){
         day++;
         //new = total * 2;
         total = 3 * total;
     }
     printf("%d\n", day + 1);

     return 0;
}