#include<stdio.h>
void meter_to_feet(double meter);
void gram2lbs(double gram);
void cel2far(double degree);

int main(void){
   double convertion;
   char letter;
   int i;
   int times;
   scanf("%d", &times);
   for(i=0;i<times;i++){
       scanf("%lf %c", &convertion, &letter);
       if(letter == 'm')
            meter_to_feet(convertion);
        else if(letter == 'g')
            gram2lbs(convertion);
        else if(letter == 'c')
            cel2far(convertion);
   
   }
   
}
void meter_to_feet(double meter){
    meter = meter * 3.2808;
    printf("%lf ft\n", meter);
}

void gram2lbs(double gram){
    gram = gram * 0.002205;
    printf("%lf lbs\n", gram);
}
void cel2far(double degree){
    degree = 32 + 1.8 * degree;
    printf("%lf f\n", degree);
}

