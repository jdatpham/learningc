#include<stdio.h>

//convert bytes to human readble
// input: number of bytes  
// print out GB, MB, KB, B
void convert_byte_to_human_readble(int num){
    int GB = 1000000000;
    int MB = 1000000;
    int KB = 1000;
    
    int g = 0;
    int m = 0;
    int k = 0;
    int b = 0;

    g = num / GB;
    num = num % GB;
    m = num / MB;
    num = num % MB;
    k = num / KB;
    b = num % KB;

    if(g > 0){
        printf("%d GB and %d MB and %d KB and %d B\n", g, m, k, b);
    }
    else if(m > 0){
       printf("%d MB and %d KB and %d B\n", m, k, b);
       
    }
    else if(k > 0){
        printf("%d KB and %d B\n", k, b);
    }
    else{
        printf("%d B\n",b);
    }

}

void  test_convert_func(){

    printf("Number of bytes: 234\n");
    printf("Required  : 234 B\n");
    printf("Your ouput:\n");
    convert_byte_to_human_readble(234);

    printf("Number of bytes: 12000\n");
    printf("Required  : 12 KB and 0 B\n");
    printf("Your ouput:\n");
    convert_byte_to_human_readble(12000);

    printf("Number of bytes: 1234\n");
    printf("Required  : 1 KB and 234 B\n");
    printf("Your ouput:\n");
    convert_byte_to_human_readble(1234);

    printf("Number of bytes: 87654321\n");
    printf("Required  : 87 MB and 654 KB and 321 B\n");
    printf("Your ouput:\n");
    convert_byte_to_human_readble(87654321);

    printf("Number of bytes: 1123456789\n");
    printf("Required  : 1 GB and 123 MB and 456 KB and  789 B\n");
    printf("Your ouput:\n");
    convert_byte_to_human_readble(1123456789);
    
}

int main(void){


   //test_convert_func();

    
    int input;
    char cinput;
    int final = 0;
    int num = 0;
    
    
    scanf("%c %d", &cinput, &input);
    if(cinput == 'i'){

        //number of bytes depending on the option
        num = 4*input;
        convert_byte_to_human_readble(num);

    }
    else if(cinput == 'd'){

        num = 8 * input;
        convert_byte_to_human_readble(num);
    }
        else if(cinput == 'c'){

         num = input;
        convert_byte_to_human_readble(num);
    }
    
    return 0;
}
