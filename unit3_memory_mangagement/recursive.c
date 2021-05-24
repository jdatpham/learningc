#include<stdio.h>
// finds the sum of all the digits of a number using loop method
// @param: num: the input number
//@return: the sum of all digits
int sumOfDigits(int num);
// finds the sum of all the digits of a number by using recursive method
// @param: num: the input number
//@return: the sum of all digits
int sumOfDigitsRecursive(int num);

int main(void){
    int num;
    scanf("%d", &num);

   printf("The sum of the digits is %d\n", sumOfDigitsRecursive(num));
    return 0;
}


int sumOfDigits(int num){
    int sum = 0;
    int remader = 0;
    while(num != 0){
        remader = num % 10;
        num = num / 10;
        sum = sum + remader;
    }
    return sum;
}

int sumOfDigitsRecursive(int num){
    int sum = 0;
    int remader = 0;
    if(num < 10){
        return num;
    }
    else{
        remader = num % 10;
        num = num / 10;

        return remader + sumOfDigitsRecursive(num);
    }
}