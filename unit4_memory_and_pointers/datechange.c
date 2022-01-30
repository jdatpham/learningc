#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
    struct date today, tomorrow;
    
    readDate(&today);
    printDate(today);
    tomorrow = advanceDay(today); 
    printDate(tomorrow);

    return 0;
}
void readDate(struct date *d){

    scanf("%d %d %d", &((*d).year), &((*d).month), &((*d).day));
}

struct date advanceDay(struct date d){
   
    if(d.month < 1 || d.month > 12){
        return d;
    }
    
    else if(d.month == 2){
        if(d.day<1 || d.day>28){
            return d;
        }
        else if(d.day == 28){
            d.day = 1;
            d.month = d.month + 1;
        }
        else{
            d.day = d.day + 1;
        }
    }
    else if(d.month == 4 || d.month == 6 || d.month == 9 || d.month == 11){
        if(d.day < 1 || d.day > 30){
            return d;
        }
        else if(d.day == 30){
            d.day = 1;
            d.month = d.month + 1;
        }
        else{
            d.day = d.day + 1;
        }
    }
    else{
        if(d.day < 1 || d.day > 31){
            return d;
        }
        else if(d.day == 31){
            if(d.month == 12){
                d.year = d.year + 1;
                d.month = 1;
                d.day = 1;
            }
            else{
                d.month = d.month + 1;
                d.day = 1;
            }
            
        }
        else{
            d.day = d.day + 1;
        }
    }
    return d;
}
void printDate(struct date d){
    printf("%02d/%02d/%04d\n", d.month, d.day, d.year);

}
