#include <stdio.h>
int main(void) {
    int arr[] = {19 , 3, 80, 7 , 1 , 140, 5, 19};
    int n = 8;
    int temp = 0;
    int j;
    int i;
    int k;

    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                 printf("swap arr[%d]= %d with arr[%d]= %d\n", i, arr[i], j, arr[j]);
                 // i = 0
                 // arr[i] = 19
                temp = arr[i];
                // temp = 19;
                // j= 1
                // arr[j] =  3
                arr[i] = arr[j];
                // arr[i] =  3
                arr[j] = temp;
                // arr[j] = 19
                printf("swap2 arr[%d]= %d with arr[%d]= %d\n\n", i, arr[i], j, arr[j]);
            }
        }                                                                
        for(k = 0; k < n; k++){
            printf("%d ", arr[k]);
        }
        printf("\n\n\n");
    }
    return 0;
}