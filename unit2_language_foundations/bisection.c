#include <stdio.h>
int main(void) {

    int i = 0;
    int arr[] = {1 ,3 ,5 ,6 ,8 ,10 ,13 ,15 ,19 ,200000};
    int start = 0;
    int end = 9;
    int item = 0;
    int found = 0;
    int mid = 0;

scanf("%d", &item);

while(!found && start + 1 < end){
    mid = (end + start) / 2;
    if(item == arr[mid]){
        found = 1;
    }
    else if(item < arr[mid]){
        
    }
}