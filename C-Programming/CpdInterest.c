#include <stdio.h>

int main(){
    // A = P(1 + (r/n))^nt; 
    int P, t, n;
    float A, C, E, r;

    printf("Please enter the initial loan amount \n");
    scanf("%d", &P);

    printf("Enter the annual interest rate \n");
    scanf("%f", &r);

    printf("Enter the number of compounding interests \n");
    scanf("%d", &n);

    printf("Enter the time in years \n");
    scanf("%d", &t);

    C = (r/n);
    printf("The (r/n) is : %.3f\n", C);
    int D;
    D = (n * t);
    printf("The (n * t) is : %d\n", D);

//    A = (P * (1 + C) ^ D);
//    printf("The compund interest is : %f\n", A);
    

    return 0;
}