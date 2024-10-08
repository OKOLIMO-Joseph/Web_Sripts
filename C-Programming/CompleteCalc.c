#include <stdio.h>
#include <math.h>

int main(){
    char operator;
    int num1, num2, result;

    printf("Enter the operation you want to carry out (+ - * /) \n");
    scanf("%c", &operator);

    switch(operator){
        //Addition
        case '+':
        printf("Enter the first number \n");
        scanf("%d", &num1);
        printf("Enter the second number \n");
        scanf("%d", &num2);
        result = num1 + num2;
        printf("Your total is : %d", result);
        break;

        //Subtraction
        case '-':
        printf("Enter the first number \n");
        scanf("%d", &num1);
        printf("Enter the second number \n");
        scanf("%d", &num2);
        result = num1 - num2;
        printf("%d - %d = %d", num1,num2,result);
        break;

        //Multiplication
        case '*':
        printf("Enter the first number \n");
        scanf("%d", &num1);
        printf("Enter the second number \n");
        scanf("%d", &num2);
        result = num1 * num2;
        printf("%d * %d = %d", num1,num2,result);
        break;

        //Division
        case '/':
        printf("Enter the first number \n");
        scanf("%d", &num1);
        printf("Enter the second number \n");
        scanf("%d", &num2);
        result = num1 / num2;
        printf("%d - %d = %d", num1,num2,result);
        break;

        //Logarithm
        case 'log':
        printf("Enter the number \n");
        scanf("%d", &num1);
       // printf("Enter the second number \n");
       // scanf("%d", &num2);
        result = log(num1);
        printf("%d - %d = %d", num1,num2,result);
        break;

        default:
        printf("You entered an invalid operator \n");
        
    }



    return 0;
}