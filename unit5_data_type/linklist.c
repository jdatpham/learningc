#include <stdio.h>
#include <stdlib.h>

typedef struct point{
    int x;
    int y;
    struct point * next;
} Point;

int main(void) {
    //! showMemory(start=65520)
    //Point pt1 = {1, 2, NULL};
    // Point pt2 = {-2, 3, NULL};
    // Point pt3 = {5, -4, NULL};
    Point *start = NULL, *ptr = NULL, *next=NULL;
    
    int n = 100;
    
    for(int i = 0; i < 10; i ++){
        next = (Point *)malloc(sizeof(Point));
        next->x = i;
        next->y = 2 * i;

        if(start == NULL){
            start = next;
            ptr = next;
        }
        else {
            ptr->next = next;
            ptr = next;
        }

        printf("x = %d, y = %d, start=%p, ptr->next=%p, ptr=%p, next= %p\n", i, 2*i, (void*)start, (void*)ptr->next, (void*)ptr, (void*)next);
    }


	return 0;
}