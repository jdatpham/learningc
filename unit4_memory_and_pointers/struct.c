#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void readDate(struct date *);
void printDate(struct date);

int main(void) {
	struct date today;
	readDate(&today);
	printDate(today);
	return 0;
}
void readDate(struct date *d){
    scanf("%d", &d->year);
    if(d->month < 0 ){
        d->year = 2022;
    }
    scanf("%d", &d->month);
    if(d->month < 1 || d->month > 12){
        d->month = 1;
    }
    scanf("%d", &d->day);
    if(d->day < 1 || d->day > 31){
        d->day = 1;
    }
}
void printDate(struct date d){
    printf("%02d/%02d/%04d\n", d.month, d.day, d.year);
}
