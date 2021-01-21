// Caculate average grade 
# include<stdio.h>

int main(void) {
    int num_grade;
    int grade;
    int total = 0;
    int i;
    double average;

    scanf("%d", &num_grade);
    printf("Input %d grades\n", num_grade);
    
    printf("Total grade is  %d\n", total);

    for(i=0; i<num_grade; i++){
        scanf("%d", &grade);
        total = total + grade;

        printf("%d Total grade is  %d\n", i, total);
    }
    average = (double)total/ (double)num_grade;
    
    printf("%.2f\n",average);

  return 0;
}
