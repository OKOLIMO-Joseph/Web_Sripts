#include <stdio.h>

int main(){

    int e1, e2, e3;
    printf("Enter your score for exam 1 \n");
    scanf("%d", &e1);
    printf("Enter your score for exam 2 \n");
    scanf("%d", &e2);
    printf("Enter your score for exam 3 \n");
    scanf("%d", &e3);

    float average;
    average =(e1 + e2 + e3) / 3;
    printf("Average = %f\n", average);

    if(average >= 90){
        printf("You score an A \n");
    }
     else if(80 <= average < 90){
        printf("You score a B \n");
     }
 
    return 0;
}