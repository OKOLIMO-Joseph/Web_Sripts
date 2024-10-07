#include <stdio.h>
#include <ctype.h>

int main(){
    char unit;
    float temp;

    printf("Is the tempertaure in F or C \n");
    scanf("%c", &unit);

    unit = toupper(unit);
    if (unit == 'F'){
        printf("Enter the temperature value \n");
        scanf("%f", &temp);
        printf("\nYour temperature in Fahrenheit = %.2f", temp);

        float tempInC;
        tempInC = (((temp - 32) * 5) / 9);
        printf("\nTemperature in Celcius = %.2f", tempInC);
    }
    else if(unit == 'C'){
        printf("Enter the temperature value \n");
        scanf("%f", &temp);
        printf("\nYour temperature in Degrees Celcius = %.2f", temp);

        float tempInF;
        tempInF = ((temp * (5/9)) + 32);
        printf("\nTemperature in Celcius = %.2f", tempInF);

    }
    else {
        printf("%c is an invalid temperature unit \n", unit);
    }

    return 0;
}