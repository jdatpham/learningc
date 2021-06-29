#include <stdio.h>

void elixr(int *, int);

int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	elixr(&ageAddr, age);

	//printf("Your new age will be %d!\n", age);
	return 0;
}


void elixr(int * ageAddr, int age){
    if(age > 21){
       age = age - 10;
       printf("Your new age will be %d!\n", age);
    }
    else{
        age = age + age;
        printf("Your new age will be %d!\n", age);
    }
} 