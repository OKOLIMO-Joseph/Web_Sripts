#include <stdio.h>

int main(){
    int tuition[5] = {1500000, 1200000, 3500000, 900000, 260000};
    int balance[5] = {1000000, 1300000, 1000000, 3650000, 900000};

    printf("Name        \tTuition Cleared       \tBalance \n");
    printf("OKOLIMO JOSEPH\t%d         \t%d\n", tuition[0], balance[0]);
    printf("LIMO JOHN\t%d         \t%d\n", tuition[1], balance[1]);
    printf("OMODDO ISAAC\t%d         \t%d\n", tuition[2], balance[2]);
    printf("LUBONGE MARVIN\t%d          \t%d\n", tuition[3], balance[3]);
    printf("OKWIR RAPHAEL\t%d          \t%d\n", tuition[4], balance[4]);

    return 0;
}