#include <stdio.h>

void print_line(int m, int n, char letter){
    int i;

    for(i = 0; i < m; i++){
        printf("+");
    }

    for(i = 0; i < n; i++){
        printf("%c" ,letter);
    }

    for(i = 0; i < m; i++){
        printf("+");
    }
    printf("\n");
}

int main(void) {
    char letter1;
    int i;
    printf("input a letter: ");
    scanf("%c", &letter1);

      /*
    print_line(4, 1, letter1);
    print_line(3, 3, letter1);
    print_line(2, 5, letter1);
    print_line(1, 7, letter1);
    print_line(0, 9, letter1);
    */
    for(i = 0; i < 5; i++){
        print_line(4 - i, 2*i + 1, letter1);
    }
  
    
    return 0;
}