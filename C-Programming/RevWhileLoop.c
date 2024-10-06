#include <stdio.h>

int main(){
    int Timeplayed = 0;
    printf("Enter the number of minutes played \n");
    scanf("%d", &Timeplayed);

    while (Timeplayed < 90){
        printf("The match is still on... \n");
        Timeplayed += 10;
    }

    return 0;
}