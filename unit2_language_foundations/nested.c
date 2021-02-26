#include <stdio.h>
int main(void) {
    int target;
    int i;
    printf("Please enter a target number: ");
    scanf("%d", &target);
    if (target >= 0) 
    {
        for (i=0; i<target; i++) 
        {
            if (i%5 == 0) 
            {
                printf("%d  - remainder %d\n", i, i%5);
            }
        }
    } 
    else 
    {
        printf("Nothing to do!\n");
    }
    return 0;
}
