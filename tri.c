#include <stdio.h>
void print_line(int n){
    int i;
    for(i = 1; i <= n; i++){
        printf("%d ", i); 
    }

    printf("\n");
}

int main(){
    int m;
    int i;
    scanf("%d", &m);
    /*
    for(i = 1; i < m + 2; i++){
        print_line(i);  
    }
    */

     for(i =  m ; i > 0; i--){
        print_line(i);  
    }

    for(i = 1; i <= m; i++){
        print_line(i);  
    }


    return 0;
}
