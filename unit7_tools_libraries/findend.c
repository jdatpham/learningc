#include <stdio.h>

int main(void) {
    FILE *ifile;  
    double num, first = 0;
    int n;
    ifile = fopen("gradeComparison.txt", "r"); 
                                
    n=0;
    while (fscanf(ifile, "%lf", &num) != EOF) {
        if(n == 0){
            first = num;
        }
        
        if(num > first){
            break;
        }
        n++;
    }
    
    fclose(ifile);
    
    if(first > num){
        printf("Yes\n");
    }
    else{
        printf("No %d\n", n+1);
    }
    return(0);
}