#include <stdio.h>

int main(){
    int cw, em, total;
   printf("Enter your course work marks out of 50 \n"); 
    scanf("%d", &cw);
    if (cw >= 17) {
    printf("Enter your exam work marks out of 50 \n");
    scanf("%d", &em);
    total = cw + em;
    printf("Your total marks = %d\n", total);
    if (total < 50){
    printf("You have failed, Adviced to retake \n");
    } else{
    printf("Congratulations for the Excellence!!! \n");
    }
    } else{
    printf("You failed to raise above 17.5, so please you are advice to retake!!! \n");
    }
    
    return 0;
}