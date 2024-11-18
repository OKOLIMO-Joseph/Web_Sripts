#include <stdio.h>
#include <stdbool.h>

int main(){

    bool val1 = true;
    bool val2 = false;

    printf("%d\n", val1);

    bool value = (4 < 2);
    printf("%d\n", value);

    int age;

    printf("Enter your age \n");
    scanf("%d", &age);

    (age > 18) ? printf("You are eligible to vote \n") : printf("You are not eligible to vote \n");

    return 0;
}