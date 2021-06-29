#include <stdio.h>

int main(void){
    int arr[10];
    int  x = 12345;
    int *p;
    int a;
    int b = 8;

    p = 12345;
    //printf("*p = %d\n", *p);
    

     for(int i = 0; i < 10; i ++){
        printf("arr[%d] = %d \n", i, arr[i] );
    }

    for(int i = 0; i < 10; i++)
        arr[i] = i;

    p = arr;

    printf(" &a = %04x - a = %d\n", &a, a);
    printf(" &b = %04x - b = %d\n", &b, b);


    printf("arr = 0x%04x  p = 0x%04x\n", arr, p);
    for(int i = 0; i < 10; i ++){
        printf("arr[%d] = %d   p[%d] = %d \n", i, arr[i], i, p[i]);
    }

    for(int i = 10; i < 20; i ++){
        printf("p[%d] = %d \n", i, p[i]);
    }

    printf("*p = %d\n", *p);
    printf("p[10] = %d\n", p[10]);
    printf("p[100] = %d\n", p[1000]);

    

    return 0;
}