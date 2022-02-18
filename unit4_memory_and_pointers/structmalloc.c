#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

void printPoint(struct point pt);
void printPoly(struct point *ptr, int N);
void initializePoly(struct point *pt, int N);

int main(void) {
    struct point *p;
    int N;
    // Fill in your main function here
    scanf("%d", &N);
    p = (struct point *) malloc(N*sizeof(struct point)); 
    initializePoly(p, N);
    printPoly(p, N);
    free(p);
    return 0;
}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

void initializePoly(struct point *pt, int N){
    int i;
    for(i=0; i<N; i++){
        pt[i].x = -i;
        //(pt + i)->x = -i;
        pt[i].y = i*i;
        //(pt + i)->y = i*i;
    }

}