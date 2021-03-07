#include <stdio.h>

int main(void) {

    int safe1 = 0;
    int safe2 = 2;
    int temp = 0;

    scanf("%d %d", &safe1, &safe2);
    while(temp != -999){
        scanf("%d", &temp);

        if(temp == -999){
            break;
        }
        else if(temp < safe1 || temp > safe2){
            printf("Alert!\n");
            return 0;
        }

        else {
            printf("Nothing to report\n");

        }
    }

    return 0;
}