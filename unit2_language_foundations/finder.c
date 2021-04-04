#include <stdio.h>
int main(void) {
    //! showArray(list, cursors=[i])
    char list[10];
    int n = 10;
    int i = 0;
    int j = 0;
    int item, i, found;
    
    for(j = 0; j < 10; j++){
        scanf("%s", list[j]);
    }
    printf("Which number are you looking for? ");
    scanf("%d", &item);
    found = 0;
    i = 0;
    while (!found && i<n) {
        if (item == list[i]) { 
            found = 1;
        } else {
            i++;
        }
    }
    
    if (!found) {
        printf("%d is not a member of this list. \n", item);
    } else {
        printf("I found %d at index %d in the list. \n", item, i);
    }
    
	return 0;
}