#include <stdio.h>
#include <stdbool.h>

int main(){
 /*   //Logical operators
    //1) &&(AND) checks if two or more condition are true
    float temp;
    printf("Enter the environmental temperature \n");
    scanf("%f", &temp);
    bool sunny = true;

    if(temp >= 0 && temp <= 30 && sunny){
        printf("The weather is good!!! \n");
    } else {
        printf("The weather is bad!!! \n");
    }
*/

/*
    //2) ||(OR) checks if at least one condition is true
    float temp;
    printf("Enter the environmental temperature \n");
    scanf("%f", &temp);

    if(temp <= 0 || temp >= 30){
        printf("The weather is bad!!! \n");
    } else {
        printf("The weather is good!!! \n");
    }

*/
    //3) !(NOT) checks if a condition is not satisfied
    bool sunny = true;

    if(!sunny){
        printf("It is cloudy outside \n");
    }else{
        printf("It is sunny outside \n");
    }


return 0;
}