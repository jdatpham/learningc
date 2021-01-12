#include <stdio.h>
int main(void) {
    int i;
    int multiply;
    int result;

    printf("Please enter a number ");
   scanf("%d", &multiply) ;
   
    
    for(i = 0; i < 10000000; i++){  
        result = i * multiply;
        
        printf("%dx%d = %d\n", i, multiply, result);
        
    }
    //printf("%dx%d = %d\n", i, multiply, result);
    return 0;
}






