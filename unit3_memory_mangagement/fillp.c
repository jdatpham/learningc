#include <stdio.h>
void reversearray(int *ptr,int n);
int main(void){
    int arr[6];
    int i;
    int *ptr;

    for(i = 0;i < 6;i++){
        scanf("%d", &arr[i]);
    }
    ptr = arr;
    reversearray(ptr, 6);
    return 0;
}
void reversearray(int *ptr, int n){

    int temp;

    for(int i = 0; i < n/2;i++){
        temp = *(ptr + n - i - 1);       // temp = arr[n - i - 1]
        *(ptr + n - i - 1) = *(ptr + i); // arr[n - i - 1] = arr[i]
        *(ptr + i) = temp;               // arr[i] = temp
    }
    for(int j=0;j<6;j++){
        printf("%d ", *(ptr+j));
    }
}

    

