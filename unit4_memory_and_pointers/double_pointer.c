#include <stdio.h>
int main(void){
     //! showMemory(cursors=[a, arrays[0], b, arrays[1], c, arrays[2]], start=65520)
    short a[3] = {234, 655, 843};
    short b[2] = {12, 62};
    short c[4] = {3456, 3467, 23, 276};
    short *arrays[3] = {a, b, c};
    
    printf("%d\n", arrays[0][0]);
    printf("%d\n", arrays[0][1]);
    printf("%d\n", arrays[0][2]);
    printf("\n");

    printf("%d\n", arrays[1][0]);
    printf("%d\n", arrays[1][1]);
     printf("\n");

    printf("%d\n", arrays[2][0]);
    printf("%d\n", arrays[2][1]);
    printf("%d\n", arrays[2][2]);
    printf("%d\n", arrays[2][3]);
    printf("\n");

    // 655
    printf("%d\n", *(arrays[0] + 1));
    // 23
    printf("%d\n", *(arrays[2] +2));
    // random 3456 -> segmentation fault
    printf("%d\n", *(arrays[1] + 3));

    return 0;
}