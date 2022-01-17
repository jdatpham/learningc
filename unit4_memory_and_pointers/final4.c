#include <stdio.h>
#include <stdlib.h>
int ** allocateIntStarArray(int);
int * allocateIntArray(int);
int main(void){
    int m;
    int n;
    int i;
    int j;
    int ** array;
    
    //1. take the input for row and column of the zone
    // m: column n: row
    scanf("%d %d", &m, &n);

    //2. allocate memory
    array = allocateIntStarArray(n);
    for( i = 0; i<n; i++){
        array[i] = allocateIntArray(m);
    }

    //3. take the input tempture of all zones
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf(" %d", &array[i][j]);
        }
    }
    //4. check for fire conditions
    for( i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            //printf(" %d ", array[i][j]);
            if(array[i][j] > 1000){
                //there is a fire in this zone
                printf("[X]");
            }
            else if(array[i][j]  <= 1000 && array[i][j] >= 100){
                //this is a zone to  watch
                printf("[*]");
            }
            else{
                // this zone is normal
                printf("[ ]");
            }
            
        }
        printf("\n");
    }

    //5. free all memory 
    for(i=0;i<n;i++){
        free(array[i]);
    }
    free(array);
    
   return 0;
        
}

int ** allocateIntStarArray(int len){
    return (int **) malloc(sizeof(int *) * len);

}
int * allocateIntArray(int len){
    return (int *)malloc(sizeof(int) * len);
}