#include<stdio.h>

int main(){

int temperature;
char temperatureUnit, F, C;

printf("Enter the temperature value \n");
scanf("%d", &temperature);

printf("Enter temperature unit \n");
scanf("%s", &temperatureUnit);
                              
//Converting the temperature

float convertedTempInFahren, convertedTempInDeg;

(convertedTempInFahren = (temperature - 32) * 5/9  || (convertedTempInDeg = (temperature * 5/9) + 32) ) ? printf("The converted temperature in Fahrenheit is : %f", convertedTempInDeg) : printf("The converted temperature in Celcius is : %f", convertedTempInFahren); 
    return 0;
} 