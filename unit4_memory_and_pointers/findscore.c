#include <stdio.h>

void behind(int *, int);

int main(void) {
    int array[10];
    int N, i;
    
    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }
    behind(array, N);
    for (i=0; i<N; i++) {
        printf("%d\n", array[i]);
    }
    
    return 0;
}

void  behind(int *array, int N){
    int i;
   // int start = array[0];
    if(N<1  ||  array == NULL){
       return;
   }
    int largest = *array; //*array(0);;

    //1 find the largest number
    for(i=1; i<N; i++){
        if(*(array+i) > largest){
            largest = *(array+i);
        }
    }
    //2 subtract biggest number from smallest
    for(i=0;i<N;i++){
        array[i] = largest - array[i];

    }
}
void  behind2(int *array, int N){
    int i;
   // int start = array[0];
   if(N<1  || array == NULL){
       return;
   }
    int largest = array[0]; //*array(0);;

    //1 find the largest number
    for(i=1; i<N; i++){
        if(array[i] > largest){
            largest = array[i];
        }
    }
    //2 subtract biggest number from smallest
    for(i=0;i<N;i++){
        array[i] = largest - array[i];

    }
}
